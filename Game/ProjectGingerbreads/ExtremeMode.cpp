#include "../ProjectGingerbreads/ExtremeMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char word[6];
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

	word[0] = extrememodewords[extrememodeindex][0];
	word[1] = extrememodewords[extrememodeindex][1];
	word[2] = extrememodewords[extrememodeindex][2];
	word[3] = extrememodewords[extrememodeindex][3];
	word[4] = extrememodewords[extrememodeindex][4];
	word[5] = extrememodewords[extrememodeindex][5];
}

char suggestionOne[6], suggestionTwo[6], suggestionThree[6], suggestionFour[6], suggestionFive[6], doesntcontain[6], contains[6], containsrightplace[6];
int lenght = 6, i, countdoesntcontain = 0, countofcontains = 0, countofcontainsinrightplace = 0;

void ExtremeMode()
{
	ExtremeGenerator(word);
	EnterSuggestion(lenght, suggestionOne);
	CheckIfContains(lenght, suggestionOne, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionOne);
	EnterSuggestion(lenght, suggestionTwo);
	CheckIfContains(lenght, suggestionTwo, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionTwo);
	EnterSuggestion(lenght, suggestionThree);
	CheckIfContains(lenght, suggestionThree, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionThree);
	EnterSuggestion(lenght, suggestionFour);
	CheckIfContains(lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFour);
	EnterSuggestion(lenght, suggestionFive);
	CheckIfContains(lenght, suggestionFive, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFive);
}