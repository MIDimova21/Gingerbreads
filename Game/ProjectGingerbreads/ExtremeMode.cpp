#include "../ProjectGingerbreads/ExtremeMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"
#include<iostream>
#include<iomanip>
using namespace std;

char word[1][6];
int extrememodeindex;
void ExtremeGenerator()
{
	srand(time(NULL));
	char extrememodewords[30][6] = {
		{'s', 'n', 'a', 'z', 'z', 'y'},
		{'a', 'v', 'a', 't', 'a', 'r'},
		{'d', 'i', 'a', 'd', 'e', 'm'},
		{'g', 'u', 'i', 't', 'a', 'r'},
		{'m', 'i', 'a', 'c', 'i', 'd'},
		{'o', 'c', 'e', 'l', 'o', 't'},
		{'b', 'u', 'r', 'g', 'l', 'e'},
		{'g', 'n', 'o', 'm', 'i', 'c'},
		{'c', 'l', 'u', 't', 'c', 'h'},
		{'s', 'c', 'h', 'i', 's', 't'},
		{'c', 'a', 'l', 'l', 'o', 'w'},
		{'g', 'n', 'e', 'i', 's', 's'},
		{'p', 'a', 'n', 'z', 'e', 'r'},
		{'h', 'a', 'r', 'b', 'o', 'r'},
		{'m', 'o', 'h', 'a', 'w', 'k'},
		{'a', 'n', 'o', 'x', 'i', 'a'},
		{'q', 'u', 'a', 'h', 'o', 'g'},
		{'s', 'l', 'i', 't', 'h', 'y'},
		{'p', 'r', 'o', 't', 'o', 'n'},
		{'n', 'e', 't', 't', 'l', 'y'},
		{'v', 'e', 'l', 'v', 'e', 't'},
		{'w', 'h', 'i', 'n', 'g', 'e'},
		{'g', 'e', 'r', 'b', 'i', 'l'},
		{'h', 'a', 'r', 'b', 'o', 'r'},
		{'b', 'a', 't', 'h', 'o', 's'},
		{'t', 'a', 't', 't', 'o', 'o'},
		{'a', 'c', 'e', 't', 'i', 'c'},
		{'p', 'i', 't', 'h', 'o', 'n'},
		{'x', 'i', 's', 't', 'y', 's'},
		{'d', 'e', 'n', 'g', 'u', 'e'}
	};
	extrememodeindex = rand() % 30;
	word[1][0] = extrememodewords[extrememodeindex][0];
	word[1][1] = extrememodewords[extrememodeindex][1];
	word[1][2] = extrememodewords[extrememodeindex][2];
	word[1][3] = extrememodewords[extrememodeindex][3];
	word[1][4] = extrememodewords[extrememodeindex][4];
	word[1][5] = extrememodewords[extrememodeindex][5];
}

char suggestionOne[1][6], suggestionTwo[1][6], suggestionThree[1][6], suggestionFour[1][6], suggestionFive[1][6];

void ExtremeModeSuggestionFirst()
{
	cout << "\n-------------------------\n";
	for (int row = 0; row < 5; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[extrememodeindex][col])
			{
				count++;
			}
		}
		if (count == 6)
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
void ExtremeModePrintFirstRow()
{
	cout << "\n-------------------------\n";
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(2) << suggestionOne[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-------------------------" << endl;
}
void ExtremeModeTableFirstPrint()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------" << endl;
	}
	ClearScreen();
}
void ExtremeModeSuggestionSecond()
{
	for (int row = 0; row < 4; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[extrememodeindex][col])
			{
				count++;
			}
		}
		if (count == 6)
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
void ExtremeModePrintSecondRow()
{
	ExtremeModePrintFirstRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(2) << suggestionTwo[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-------------------------" << endl;
}
void ExtremeModeTableSecondPrint()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------" << endl;
	}
	ClearScreen();
}
void ExtremeModeSuggestionThird()
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[extrememodeindex][col])
			{
				count++;
			}
		}
		if (count == 6)
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
void ExtremeModePrintThirdRow()
{
	ExtremeModePrintSecondRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(2) << suggestionThree[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-------------------------" << endl;
}
void ExtremeModeTableThirdPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------" << endl;
	}
	ClearScreen();
}
void ExtremeModeSuggestionFourth()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[extrememodeindex][col])
			{
				count++;
			}
		}
		if (count == 6)
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
void ExtremeModePrintFourthRow()
{
	ExtremeModePrintThirdRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(2) << suggestionFour[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-------------------------" << endl;
}
void ExtremeModeTableFourthtPrint()
{
	for (int row = 0; row < 2; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "-------------------------" << endl;
	}
	ClearScreen();
}
void ExtremeModeSuggestionFifth()
{
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(4) << "|";
		}
		cout << "\n-------------------------\n";
	}
	int count = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cin >> suggestionOne[row][col];
			if (suggestionOne[row][col] == word[extrememodeindex][col])
			{
				count++;
			}
		}
		if (count == 6)
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
void ExtremeModePrintFifthRow()
{
	ExtremeModePrintFourthRow();
	for (int row = 0; row < 1; row++)
	{
		cout << "|";
		for (int col = 0; col < 6; col++)
		{
			cout << setw(2) << suggestionFive[row][col] << setw(2) << "|";
		}
	}
	cout << "\n-------------------------" << endl;
}
void ExtremeMode()
{
	displaymenu();
	ExtremeModeSuggestionFirst();
	ExtremeModePrintFirstRow();
	ExtremeModeSuggestionSecond();
	ExtremeModePrintSecondRow();
	ExtremeModeSuggestionThird();
	ExtremeModePrintThirdRow();
	ExtremeModeSuggestionFourth();
	ExtremeModePrintFourthRow();
	ExtremeModeSuggestionFifth();
	ExtremeModePrintFifthRow();
}