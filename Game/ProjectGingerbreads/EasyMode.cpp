#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include<iostream>
#include<iomanip>
using namespace std;

char word[1][4];
int indexeasymode;
void EasyGenerator()
{
	srand(time(NULL));
	char easymodewords[30][4] = {
		{'r', 'a', 'i', 'n'},
		{'p', 'l', 'a', 'y'},
		{'l', 'e', 'a', 'n'},
		{'s', 't', 'a', 'b'},
		{'s', 'e', 'e', 'd'},
		{'t', 'a', 'p', 'e'},
		{'l', 'a', 'n', 'd'},
		{'b', 'o', 'w', 'l'},
		{'c', 'a', 'm', 'p'},
		{'f', 'o', 'r', 'k'},
		{'c', 'r', 'e', 'w'},
		{'d', 'o', 'o', 'r'},
		{'p', 'a', 'c', 'k'},
		{'h', 'a', 'n', 'd'},
		{'s', 'o', 'u', 'r'},
		{'c', 'o', 's', 't'},
		{'r', 'a', 'n', 'k'},
		{'s', 't', 'a', 'r'},
		{'s', 'c', 'a', 'r'},
		{'w', 'o', 'o', 'd'},
		{'y', 'e', 'a', 'r'},
		{'m', 'o', 'o', 'd'},
		{'l', 'o', 'v', 'e'},
		{'l', 'i', 'k', 'e'},
		{'h', 'a', 't', 'e'},
		{'n', 'e', 'a', 'r'},
		{'n', 'a', 'i', 'l'},
		{'h', 'a', 'i','r'},
		{'s', 'o', 'r', 'e'},
		{'r', 'a', 'c', 'e'}
	};
	indexeasymode = rand() % 30;
	word[1][0] = easymodewords[indexeasymode][0];
	word[1][1] = easymodewords[indexeasymode][1];
	word[1][2] = easymodewords[indexeasymode][2];
	word[1][3] = easymodewords[indexeasymode][3];
}
char suggestionOne[1][4], suggestionTwo[1][4], suggestionThree[1][4], suggestionFour[1][4], suggestionFive[1][4];
void EasySuggestionFirst()
{
	cout << "\n-----------------\n";
	for (int row = 0; row < 5; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[indexeasymode][col])
			{
				count++;
			}
		}
		if (count == 4)
		{
			Win();
		}
		else if (count >= 1)
		{
			Contains();
		}
		else
		{
			DoesntContain();
		}
	}
	ClearScreen();
}
void EasyPrintFirstRow()
{
	cout << "\n-----------------\n";
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(2) << suggestionOne[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-----------------" << endl;
}
void EasySuggestionSecond()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[indexeasymode][col])
			{
				count++;
			}
		}
		if (count == 4)
		{
			Win();
		}
		else if (count >= 1)
		{
			Contains();
		}
		else
		{
			DoesntContain();
		}
	}
	ClearScreen();
}
void EasyPrintSecondRow()
{
	EasyPrintFirstRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(2) << suggestionTwo[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-----------------" << endl;
}
void EasySuggestionThird()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[indexeasymode][col])
			{
				count++;
			}
		}
		if (count == 4)
		{
			Win();
		}
		else if (count >= 1)
		{
			Contains();
		}
		else
		{
			DoesntContain();
		}
	}
	ClearScreen();
}
void EasyPrintThirdRow()
{
	EasyPrintSecondRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(2) << suggestionThree[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-----------------" << endl;
}
void EasySuggestionFourth()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[indexeasymode][col])
			{
				count++;
			}
		}
		if (count == 4)
		{
			Win();
		}
		else if (count >= 1)
		{
			Contains();
		}
		else
		{
			DoesntContain();
		}
		ClearScreen();
	}
}
void EasyPrintFourthRow()
{
	EasyPrintThirdRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(2) << suggestionFour[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-----------------" << endl;
}

void EasySuggestionFifth()
{
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[indexeasymode][col])
			{
				count++;
			}
		}
		if (count == 4)
		{
			Win();
		}
		else
		{
			Lost();
		}
		ClearScreen();
	}
}
void EasyPrintFifthRow()
{
	EasyPrintFourthRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(2) << suggestionFive[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-----------------" << endl;
}
void EasyMode()
{
	displaymenu();
	EasySuggestionFirst();
	EasyPrintFirstRow();
	EasySuggestionSecond();
	EasyPrintSecondRow();
	EasySuggestionThird();
	EasyPrintThirdRow();
	EasySuggestionFourth();
	EasyPrintFourthRow();
	EasySuggestionFifth();
	EasyPrintFifthRow();
}