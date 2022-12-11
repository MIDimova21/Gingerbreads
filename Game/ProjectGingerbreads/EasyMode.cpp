#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include<iostream>
#include<iomanip>
using namespace std;

void EasyGenerator()
{
	srand(time(NULL));
	string easymodewords[30][4] = {
		{"r", "a", "i", "n"}, 
		{"p", "l", "a", "y"},
		{"l", "e", "a", "n"},
		{"s", "t", "a", "b"},
		{"s", "e", "e", "d"},
		{"t", "a", "p", "e"},
		{"l", "a", "n", "d"},
		{"b", "o", "w", "l"},
		{"c", "a", "m", "p"},
		{"f", "o", "r", "k"},
		{"c", "r", "e", "w"},
		{"d", "o", "o", "r"},
		{"p", "a", "c", "k"},
		{"h", "a", "n", "d"},
		{"s", "o", "u", "r"},
		{"c", "o", "s", "t"},
		{"r", "a", "n", "k"},
		{"s", "t", "a", "r"},
		{"s", "c", "a", "r"},
		{"w", "o", "o", "d"},
		{"y", "e", "a", "r"},
		{"m", "o", "o", "d"},
		{"l", "o", "v", "e"},
		{"l", "i", "k", "e"},
		{"h", "a", "t", "e"},
		{"n", "e", "a", "r"},
		{"n", "a", "i", "l"},
		{"h", "a", "i","r"},
		{"s", "o", "r", "e"},
		{"r", "a", "c", "e"}
	};
	int index = rand() % 30;
	string word[1][4] = {
		easymodewords[index][0], easymodewords[index][1], easymodewords[index][2], easymodewords[index][3]
	};
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
			if (suggestionOne[row][col] == word[index][col])
			{
				count++;
			}
		}
		if (count == 5)
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
void EasyTableFirstPrint()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------" << endl;
	}
	ClearScreen();
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
			if (suggestionOne[row][col] == word[index][col])
			{
				count++;
			}
		}
		if (count == 5)
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
void EasyTableSecondPrint()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------" << endl;
	}
	ClearScreen();
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
			if (suggestionOne[row][col] == word[index][col])
			{
				count++;
			}
		}
		if (count == 5)
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
void EasyTableThirdPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-----------------" << endl;
	}
	ClearScreen();
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
			if (suggestionOne[row][col] == word[index][col])
			{
				count++;
			}
		}
		if (count == 5)
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
void EasyTableFourthtPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 4; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "-----------------" << endl;
	}
	ClearScreen();
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
			if (suggestionOne[row][col] == word[index][col])
			{
				count++;
			}
		}
		if (count == 5)
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