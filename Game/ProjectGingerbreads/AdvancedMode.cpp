#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include<iostream>
#include<iomanip>
using namespace std;

char word[1][5];
int advancedindex;
void AdvancedGenerator()
{
	srand(time(NULL));
	char advancedmodewords[30][5] = {
		{'a', 'l', 'o', 'n', 'g'},
		{'b', 'a', 's', 'e', 'd'},
		{'c', 'h', 'e', 'a', 't'},
		{'d', 'i', 'a', 'r', 'y'},
		{'d', 'e', 'p', 'o', 't'},
		{'e', 'n', 't', 'e', 'r'},
		{'l', 'o', 'v', 'e', 'r'},
		{'b', 'r', 'e', 'a', 'k'},
		{'o', 'w', 'n', 'e', 'r'},
		{'c', 'r', 'o', 's', 's'},
		{'c', 'l', 'o', 's', 'e'},
		{'f', 'a', 'u', 'l', 't'},
		{'f', 'l', 'a', 'r', 'e'},
		{'l', 'e', 'd', 'g', 'e'},
		{'m', 'a', 'n', 'i', 'a'},
		{'m', 'a', 'y', 'o', 'r'},
		{'m', 'e', 'r', 'g', 'e'},
		{'s', 'e', 'n', 'c', 'e'},
		{'w', 'i', 'n', 'c', 'e'},
		{'s', 't', 'a', 't', 'e'},
		{'h', 'a', 'u', 's', 'e'},
		{'d', 'r', 'i', 'n', 'k'},
		{'q', 'u', 'o', 't', 'e'},
		{'q', 'u', 'a', 'r', 't'},
		{'u', 'n', 't', 'i', 'l'},
		{'y', 'a', 'c', 'h', 't'},
		{'r', 'e', 'p', 'a', 'y'},
		{'o', 'r', 'b', 'i', 't'},
		{'o', 'a', 's', 'i', 's'},
		{'s', 'h', 'a', 'r', 'k'}
	};
	advancedindex = rand() % 30;
	word[1][0] = advancedmodewords[advancedindex][0];
	word[1][1] = advancedmodewords[advancedindex][1];
	word[1][2] = advancedmodewords[advancedindex][2];
	word[1][3] = advancedmodewords[advancedindex][3];
	word[1][4] = advancedmodewords[advancedindex][4];
}

char suggestionOne[1][5], suggestionTwo[1][5], suggestionThree[1][5], suggestionFour[1][5], suggestionFive[1][5];

void AdvancedSuggestionFirst()
{
	cout << "\n---------------------\n";
	for (int row = 0; row < 5; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[advancedindex][col])
			{
				++count;
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
	ClearScreen();
}
void AdvancedPrintFirstRow()
{
	cout << "\n---------------------\n";
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(2) << suggestionOne[row][col] << setw(2) << "|";
		}
	}
	cout << "\n---------------------" << endl;
}
void AdvancedTableFirstPrint()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------" << endl;
	}
	ClearScreen();
}
void AdvancedSuggestionSecond()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[advancedindex][col])
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
	ClearScreen();
}
void AdvancedPrintSecondRow()
{
	AdvancedPrintFirstRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(2) << suggestionTwo[row][col] << setw(2) << "|";
		}
	}
	cout << "\n---------------------" << endl;
}
void AdvancedTableSecondPrint()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------" << endl;
	}
	ClearScreen();
}
void AdvancedSuggestionThird()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[advancedindex][col])
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
	ClearScreen();
}
void AdvancedPrintThirdRow()
{
	AdvancedPrintSecondRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(2) << suggestionThree[row][col] << setw(2) << "|";
		}
	}
	cout << "\n---------------------" << endl;
}
void AdvancedTableThirdPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------" << endl;
	}
	ClearScreen();
}
void AdvancedSuggestionFourth()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[advancedindex][col])
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
	ClearScreen();
}
void AdvancedPrintFourthRow()
{
	AdvancedPrintThirdRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(2) << suggestionFour[row][col] << setw(2) << "|";
		}
	}
	cout << "\n---------------------" << endl;
}
void AdvancedTableFourthtPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "---------------------" << endl;
	}
	ClearScreen();
}
void AdvancedSuggestionFifth()
{
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n---------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[advancedindex][col])
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
	ClearScreen();
}
void AdvancedPrintFifthRow()
{
	AdvancedPrintFourthRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 5; col++)
		{
			cout << setw(2) << suggestionFive[row][col] << setw(2) << "|";
		}
	}
	cout << "\n---------------------" << endl;
}
void AdvancedMode()
{
	displaymenu();
	AdvancedSuggestionFirst();
	AdvancedPrintFirstRow();
	AdvancedSuggestionSecond();
	AdvancedPrintSecondRow();
	AdvancedSuggestionThird();
	AdvancedPrintThirdRow();
	AdvancedSuggestionFourth();
	AdvancedPrintFourthRow();
	AdvancedSuggestionFifth();
	AdvancedPrintFifthRow();
}