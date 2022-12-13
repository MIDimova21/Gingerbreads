#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/ExtremeMode.h"

void ClearScreenMenu()
{
    system("cls");
}

void ClearScreen()
{
    system("cls");
    displaymenu();
}

void displaymenu()
{
	cout << "                                                               " << endl;
	cout << "   $$\\      $$\\                           $$\\    $$\\              " << endl;
	cout << "   $$ | $\\  $$ |                          $$\\   |$$ |             " << endl;
	cout << "   $$ |$$$\\ $$ | $$$$$$\\   $$$$$$\\   $$$$$$$\\   |$$ | $$$$$$\\     " << endl;
	cout << "   $$ $$ $$\\$$ |$$  __$$\\ $$  __$$\\ $$  ___$$\\  |$$ |$$  __$$\\    " << endl;
	cout << "   $$$$  _$$$$ |$$ /  $$ |$$ |  \\__|$$ /   |$$\\ |$$ |$$$$$$$$ |   " << endl;
	cout << "   $$$  / \\$$$ |$$ |  $$ |$$ | |    $$ |   |$$\\ |$$ |$$   ____|   " << endl;
	cout << "   $$   /   \\$$ |\\$$$$$$  |$$ |      \\$$$$$$$$\\ |$$ |\\$$$$$$$\\    " << endl;
	cout << "   \\__/     \\__| \\______/ \\__|       \\____\\___|\\____| \\_______|   \n" << endl;
}

void Win()
{
	cout << endl;
	cout << "   $$\\      $$\\   $$\\   $$$\\     $$\\" << endl;
	cout << "   $$ | $\\  $$ |  $$ |  $$$$$    $$ |" << endl;
	cout << "   $$ |$$$\\ $$ |  $$ |  $$ |\\$$  $$ |" << endl;
	cout << "   $$ $$ $$\\$$ |  $$ |  $$ | \\$$\\$$ |" << endl;
	cout << "   $$$$  _$$$$ |  $$ |  $$ |  \\$\\$$ |" << endl;
	cout << "   $$$  / \\$$$ |  $$ |  $$ |   \\$$$ |" << endl;
	cout << "   $$  /   \\$$ |  $$ |  $$ |    \\$$ |" << endl;
	cout << "   \\__/     \\__|  \\__\\  \\__\\    \\__/\n" << endl;
	cout << "\n\n\n\n\n\n";

	cout << "You won! Congratulations!" << endl;
	cout << "Press e to exit" << endl;

	char wininput;

	cin >> wininput;

	if (wininput == 'e')
	{
		start();
	}
	else
	{
		ClearScreenMenu();
		cout << "\nYou have entered an invalid option, please enter a valid one!\n";
		Win();
	}
}

void Lost()
{
	cout << endl;
	cout << "$$\\            $$$$$           $$$$$$$$   $$$$$$$$$$$$\\" << endl;
	cout << "$$ |\\        $$$$$$$$\\       $$$$$$    $$      $$ \\---/" << endl;
	cout << "$$ |\\       $$  ____ $$\\    $$$$$              $$ |" << endl;
	cout << "$$ |\\      $$$ /    \\$$$\\    $$$$              $$ |" << endl;
	cout << "$$ |\\      $$$ |    |$$$\\      $$$$$ \\_        $$ |" << endl;
	cout << "$$ |\\       $$$\\    /$$$\\        \\$$$$ \\       $$ |" << endl;
	cout << "$$ |\\        $$  ---- $$\\\\        \\$$$$  \\     $$ |" << endl;
	cout << "$$ |\\        \\$$$$$$$$$$ / /|$$   \\$$$$$$ |    $$ |" << endl;
	cout << "$$$$$$$$$$$\\  \\ $$$$$$  /      $$$$$$$$$  /    $$ |" << endl;
	cout << "\\__________\\   \\_______/      /_________/     \\___/" << endl;
	cout << "\n\n\n\n\n\n";

	cout << "You lost." << endl;
	cout << "Press e to exit" << endl;

	char wininput;

	cin >> wininput;

	if (wininput == 'e')
	{
		start();
	}
	else
	{
		ClearScreenMenu();
		cout << "\nYou have entered an invalid option, please enter a valid one!\n";
		Lost();
	}
}

void SetColor(int color)
{
	if (SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color))
	{
		return;
	}
	else
	{
		SetColor(color);
	}
}

void EnterSuggestion(int length, char suggestion[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> suggestion[i];
	}
}

void PrintSuggestion(int lenght, int countofcontains, int countofcontainsinrightplace, int countdoesntcontain, char contains[], char containsinrightplace[], char doesntcontain[], char suggest[], char word[])
{
	countofcontains = 0;	
	countofcontainsinrightplace = 0; 
	countdoesntcontain = 0;

	cout << "-------------------------\n|";
	for (int i = 0; i < lenght; i++)
	{
		for (int j = 0; j < lenght; j++)
		{
			if ((int)suggest[i] == (int)word[j] && (int)suggest[i] != (int)word[i])
			{
				SetColor(GOLD);
				contains[countofcontains] = suggest[i];
				countofcontains++;
			}
			else if ((int)suggest[i] == (int)word[j])
			{
				SetColor(GREEN);
				containsinrightplace[countofcontainsinrightplace] = suggest[i];
				countofcontainsinrightplace++;
			}
			else
			{
				SetColor(RED);
				doesntcontain[countdoesntcontain] = suggest[i];
				countdoesntcontain++;
			}
			
		}
		cout << suggest[i] << "|";
		if (countofcontainsinrightplace == lenght)
		{
				Win();
		}
		else if (i == lenght && countofcontainsinrightplace != lenght)
		{
			Lost();
		}
	}
	cout << "\n-------------------------\n";
}
