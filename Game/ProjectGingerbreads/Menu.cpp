#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/ExtremeMode.h"
#include<iostream>
#include<iomanip>
using namespace std;

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

void start()
{
	displaymenu();
	string confirm;
	int yourchoice;

	cout << "1. Easy Mode" << endl;
	cout << "2. Advanced Mode" << endl;
	cout << "3. Extreme Mode" << endl;
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
				ClearScreenMenu();
				EasyMode();
				break;
			}
			case 2:
			{
				ClearScreenMenu();
				AdvancedMode();
				break;
			}
			case 3:
			{
				ClearScreenMenu();
				ExtremeMode();
				break;
			}
			default:
			{
				ClearScreenMenu();
				cout << "\nYou have entered an invalid option, please enter a valid one!\n";
				start();
				break;
			}
		}
	} while (confirm == "y" || confirm == "Y");
}