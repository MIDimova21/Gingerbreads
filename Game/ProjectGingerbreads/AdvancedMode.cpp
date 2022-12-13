#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char word[5];
void AdvancedGenerator(char word[])
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
	int advancedindex = rand() % 30;
	word[0] = advancedmodewords[advancedindex][0];
	word[1] = advancedmodewords[advancedindex][1];
	word[2] = advancedmodewords[advancedindex][2];
	word[3] = advancedmodewords[advancedindex][3];
	word[4] = advancedmodewords[advancedindex][4];
}

char suggestionOne[5], suggestionTwo[5], suggestionThree[5], suggestionFour[5], suggestionFive[5], doesntcontain[5], contains[5], containsrightplace[5];
int lenght = 5, i, countdoesntcontain = 0, countofcontains = 0, countofcontainsinrightplace = 0;

void AdvancedMode()
{
	AdvancedGenerator(word);
	EnterSuggestion(lenght, suggestionOne);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionOne);
	EnterSuggestion(lenght, suggestionTwo);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionTwo);
	EnterSuggestion(lenght, suggestionThree);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionThree);
	EnterSuggestion(lenght, suggestionFour);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFour);
	EnterSuggestion(lenght, suggestionFive);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFive);
}