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
	cout << setw(25) << "WORDLE \n\n";
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
		cout << "Enter your choice:";
		cin >> yourchoice;
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
			cout << "You have entered an invalid option, please enter a valid one";
			break;
		}
		}
		cout << "Press y to confirm \n";
		cin >> confirm;
	} while (confirm == "y" || confirm == "Y");
}