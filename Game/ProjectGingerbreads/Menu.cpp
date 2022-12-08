#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/ExtremeMode.h"
#include "../ProjectGingerbreads/ChristmasEdition.h"
#include<iostream>
#include<iomanip>
using namespace std;

void displaymenu()
{
	system("cls");
	cout << "=================================================================" << endl;
	cout << "|                                                               |" << endl;
	cout << "|   $$\\      $$\\                           $$\\ $$\\              |" << endl;
	cout << "|   $$ | $\\  $$ |                          $$ |$$ |             |" << endl;
	cout << "|   $$ |$$$\\ $$ | $$$$$$\\   $$$$$$\\   $$$$$$$ |$$ | $$$$$$\\     |" << endl;
	cout << "|   $$ $$ $$\\$$ |$$  __$$\\ $$  __$$\\ $$  __$$ |$$ |$$  __$$\\    |" << endl;
	cout << "|   $$$$  _$$$$ |$$ /  $$ |$$ |  \\__|$$ /  $$ |$$ |$$$$$$$$ |   |" << endl;
	cout << "|   $$$  / \\$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$   ____|   |" << endl;
	cout << "|   $$  /   \\$$ |\\$$$$$$  |$$ |      \\$$$$$$$ |$$ |\\$$$$$$$\\    |" << endl;
	cout << "|   \\__/     \\__| \\______/ \\__|       \\_______|\\__| \\_______|   |" << endl;
	cout << "|                                                               |" << endl;
	cout << "=================================================================" << endl;
}

void start()
{
	displaymenu();
	string confirm;
	int yourchoice;

	cout << "1. Easy Mode" << endl;
	cout << "2. Advanced Mode" << endl;
	cout << "3. Extreme Mode" << endl;
	cout << "4. Christmas Edition" << endl;
	do
	{
		cout << "\nEnter your choice:\n";
		cin >> yourchoice;
		cout << "\nPress y to confirm \n";
		cin >> confirm;
		switch (yourchoice)
		{
		case 1:
		{
			ClearScreen();
			EasyMode();
			break;
		}
		case 2:
		{
			ClearScreen();
			AdvancedMode();
			break;
		}
		case 3:
		{
			ClearScreen();
			ExtremeMode();
			break;
		}
		case 4:
		{
			ClearScreen();
			ChristmasEdition();
			break;
		}
		default:
		{
			ClearScreen();
			displaymenu();
			cout << "\nYou have entered an invalid option, please enter a valid one!\n";
			break;
		}
		}
	} while (confirm == "y" || confirm == "Y");
}