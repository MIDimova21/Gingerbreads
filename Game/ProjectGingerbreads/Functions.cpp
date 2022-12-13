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

void Hint(char word[])
{
	srand(time(0));
	unsigned int r = rand() % 2;
	string wordpicked = word[r];
	int n = wordpicked.size();
	string scrambleword = wordpicked;
	for (int i = 0; i < 50; i++)
	{
		for (int i = 0; i < n; i++)
		{
			swap(scrambleword[i], scrambleword[rand() % n]);
		}
	}

	cout << scrambleword << endl;
}

void EnterSuggestion(int length, char suggestion[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> suggestion[i];
	}
}

void ContainsRightPlace(int countofcontainsinrightplace, char containsrightplace[], char suggest, int i)
{
	containsrightplace[countofcontainsinrightplace] = suggest[i];
	countofcontainsinrightplace++;
}

void Contains(int length, int countofcontains, char contains[], char suggest, int i)
{
	contains[countofcontains] = suggest[i];
	countofcontains++;
}

void DoesntContain(int length, int countdoesntcontain, char doesntcontain[], char suggest, int i)
{
	doesntcontain[countdoesntcontain] = suggest[i]
	countdoesntcontain++;
}

void CheckIfContains(char word[], int lenght, int suggestion, char doesntcontain[], char contains[], char containsrightplace[], int countdoesntcontain, int countofcontains, int countofcontainsinrightplace)
{
	for (i = 0; i < length; i++)
	{
		cout << "-------------------------\n";
		for (int j = 0; j < length; j++)
		{
			if ((int)suggestion[i] == (int)word[j] && (int)suggestion[i] != (int)word[i]))
			{
				SetColor(GOLD);
				Contains(length, countofcontains, contains, suggest, i);
			}
			else if ((int)suggestion[i] == (int)word[j])
			{
				SetColor(GREEN);
				ContainsRightPlace(length, countofcontainsinrightplace, containsrightplace, suggest, i)
			}
			else 
			{
				SetColor(RED);
				DoesntContain(length, countdoesntcontain. doesntcontain, suggest, i)
			}
			cout << suggestion[i] << "|";
			cout << "\n-------------------------\n";
			if(countsofright == lenght)
			{
				Win();
			}
}
void PrintSuggestion(int length, char suggestion[])
{
	CheckIfContains(int lenght, char suggestion[], char word[]);
}