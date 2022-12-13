#include "../ProjectGingerbreads/ExtremeMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char extrememodeword[6];
void ExtremeGenerator(char word[])
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
		{'p', 'y', 't', 'h', 'o', 'n'},
		{'x', 'i', 's', 't', 'y', 's'},
		{'d', 'e', 'n', 'g', 'u', 'e'}
	};
	int extrememodeindex = rand() % 30;

	extrememodeword[0] = extrememodewords[extrememodeindex][0];
	extrememodeword[1] = extrememodewords[extrememodeindex][1];
	extrememodeword[2] = extrememodewords[extrememodeindex][2];
	extrememodeword[3] = extrememodewords[extrememodeindex][3];
	extrememodeword[4] = extrememodewords[extrememodeindex][4];
	extrememodeword[5] = extrememodewords[extrememodeindex][5];
}

char extrememodesuggestionOne[6], extrememodesuggestionTwo[6], extrememodesuggestionThree[6], extrememodesuggestionFour[6], extrememodesuggestionFive[6],
	extrememodedoesntcontain[6], extrememodecontains[6], extrememodecontainsrightplace[6];
int extrememodelenght = 6, extrememodecountsdoesntcontain, extrememodecountofcontains, extrememodecountofcontainsinrightplace;

void ExtremeMode()
{
	displaymenu();
	ExtremeGenerator(extrememodeword);
	EnterSuggestion(extrememodelenght, extrememodesuggestionOne);
	PrintSuggestion(extrememodelenght, extrememodecountofcontains, extrememodecountofcontainsinrightplace, extrememodecountsdoesntcontain, extrememodecontains, extrememodecontainsrightplace, extrememodedoesntcontain, extrememodesuggestionOne, extrememodeword);
	EnterSuggestion(extrememodelenght, extrememodesuggestionTwo);
	PrintSuggestion(extrememodelenght, extrememodecountofcontains, extrememodecountofcontainsinrightplace, extrememodecountsdoesntcontain, extrememodecontains, extrememodecontainsrightplace, extrememodedoesntcontain, extrememodesuggestionTwo, extrememodeword);
	EnterSuggestion(extrememodelenght, extrememodesuggestionThree);
	PrintSuggestion(extrememodelenght, extrememodecountofcontains, extrememodecountofcontainsinrightplace, extrememodecountsdoesntcontain, extrememodecontains, extrememodecontainsrightplace, extrememodedoesntcontain, extrememodesuggestionThree, extrememodeword);
	EnterSuggestion(extrememodelenght, extrememodesuggestionFour);
	PrintSuggestion(extrememodelenght, extrememodecountofcontains, extrememodecountofcontainsinrightplace, extrememodecountsdoesntcontain, extrememodecontains, extrememodecontainsrightplace, extrememodedoesntcontain, extrememodesuggestionFour, extrememodeword);
	EnterSuggestion(extrememodelenght, extrememodesuggestionFive);
	PrintSuggestion(extrememodelenght, extrememodecountofcontains, extrememodecountofcontainsinrightplace, extrememodecountsdoesntcontain, extrememodecontains, extrememodecontainsrightplace, extrememodedoesntcontain, extrememodesuggestionFive, extrememodeword);
}