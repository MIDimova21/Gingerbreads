#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char word[4];

void EasyGenerator(char word[])
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
	int indexeasymode = rand() % 30;
	word[0] = easymodewords[indexeasymode][0];
	word[1] = easymodewords[indexeasymode][1];
	word[2] = easymodewords[indexeasymode][2];
	word[3] = easymodewords[indexeasymode][3];
}

char suggestionOne[4], suggestionTwo[4], suggestionThree[4], suggestionFour[4], suggestionFive[4], doesntcontain[4], contains[4], containsrightplace[4];
int lenght = 4, i, countdoesntcontain = 0, countofcontains = 0, countofcontainsinrightplace = 0;

void EasyMode()
{
	EasyGenerator(word);
	EnterSuggestion(lenght, suggestionOne);
	CheckIfContains(word, lenght, suggestionOne, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionOne);
	EnterSuggestion(lenght, suggestionTwo);
	CheckIfContains(word, lenght, suggestionTwo, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionTwo);
	EnterSuggestion(lenght, suggestionThree);
	CheckIfContains(word, lenght, suggestionThree, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionThree);
	EnterSuggestion(lenght, suggestionFour);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFour);
	EnterSuggestion(lenght, suggestionFive);
	CheckIfContains(word, lenght, suggestionFour, doesntcontain, contains, containsrightplace, countdoesntcontain, countofcontains, countofcontainsinrightplace);
	PrintSuggestion(lenght, suggestionFive);
}