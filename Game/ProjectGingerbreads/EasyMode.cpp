#include "../ProjectGingerbreads/EasyMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char easymodeword[4];

void EasyGenerator(char word[])
{
	char esturnto1darray[1][4];
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

	esturnto1darray[1][0] = easymodewords[indexeasymode][0];
	esturnto1darray[1][1] = easymodewords[indexeasymode][1];
	esturnto1darray[1][2] = easymodewords[indexeasymode][2];
	esturnto1darray[1][3] = easymodewords[indexeasymode][3];

	easymodeword[0] = esturnto1darray[1][0];
	easymodeword[1] = esturnto1darray[1][1];
	easymodeword[2] = esturnto1darray[1][2];
	easymodeword[3] = esturnto1darray[1][3];
}

char easymodesuggestionOne[4], easymodesuggestionTwo[4], easymodesuggestionThree[4], easymodesuggestionFour[4], easymodesuggestionFive[4],
	easymodedoesntcontain[4], easymodecontains[4], easymodecontainsrightplace[4];
int easymodelenght = 4, easymodecountsdoesntcontain = 0, easymodecountofcontains = 0, easymodecountofcontainsinrightplace = 0;

void EasyMode()
{
	displaymenu();
	EasyGenerator(easymodeword);
	EnterSuggestion(easymodelenght, easymodesuggestionOne);
	PrintSuggestion(easymodelenght, easymodecountofcontains, easymodecountofcontainsinrightplace, easymodecountsdoesntcontain, easymodecontains, easymodecontainsrightplace, easymodedoesntcontain, easymodesuggestionOne, easymodeword);
	EnterSuggestion(easymodelenght, easymodesuggestionTwo);
	PrintSuggestion(easymodelenght, easymodecountofcontains, easymodecountofcontainsinrightplace, easymodecountsdoesntcontain, easymodecontains, easymodecontainsrightplace, easymodedoesntcontain, easymodesuggestionTwo, easymodeword);
	EnterSuggestion(easymodelenght, easymodesuggestionThree);
	PrintSuggestion(easymodelenght, easymodecountofcontains, easymodecountofcontainsinrightplace, easymodecountsdoesntcontain, easymodecontains, easymodecontainsrightplace, easymodedoesntcontain, easymodesuggestionThree, easymodeword);
	EnterSuggestion(easymodelenght, easymodesuggestionFour);
	PrintSuggestion(easymodelenght, easymodecountofcontains, easymodecountofcontainsinrightplace, easymodecountsdoesntcontain, easymodecontains, easymodecontainsrightplace, easymodedoesntcontain, easymodesuggestionFour, easymodeword);
	EnterSuggestion(easymodelenght, easymodesuggestionFive);
	PrintSuggestion(easymodelenght, easymodecountofcontains, easymodecountofcontainsinrightplace, easymodecountsdoesntcontain, easymodecontains, easymodecontainsrightplace, easymodedoesntcontain, easymodesuggestionFive, easymodeword);
}