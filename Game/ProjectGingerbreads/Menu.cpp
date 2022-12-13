#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/ExtremeMode.h"


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