#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/ExtremeMode.h"
#include<iostream>
#include<iomanip>

using namespace std;

void ClearScreenMenu()
{
    system("cls");
}
void ClearScreen()
{
    system("cls");
    displaymenu();
}
void Contains()
{
    cout << "The word given has this letter! Continue guessing, you're almost there!";
    ClearScreenMenu();
}
void DoesntContain()
{
    cout << "The word givenn doesn't have that letter. Keep guessing!";
    ClearScreenMenu();
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