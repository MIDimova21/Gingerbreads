#include "../ProjectGingerbreads/AdvancedMode.h"
#include "../ProjectGingerbreads/Menu.h"
#include "../ProjectGingerbreads/Functions.h"

char advancedmodeword[5];
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
	advancedmodeword[0] = advancedmodewords[advancedindex][0];
	advancedmodeword[1] = advancedmodewords[advancedindex][1];
	advancedmodeword[2] = advancedmodewords[advancedindex][2];
	advancedmodeword[3] = advancedmodewords[advancedindex][3];
	advancedmodeword[4] = advancedmodewords[advancedindex][4];
}

char advancedmodesuggestionOne[5], advancedmodesuggestionTwo[5], advancedmodesuggestionThree[5], advancedmodesuggestionFour[5], advancedmodesuggestionFive[5], 
	advancedmodedoesntcontain[5], advancedmodecontains[5], advancedmodecontainsrightplace[5];
int advancedmodelenght = 5, advancedmodecountsdoesntcontain = 0, advancedmodecountofcontains = 0, advancedmodecountofcontainsinrightplace = 0;

void AdvancedMode()
{
	displaymenu();
	AdvancedGenerator(advancedmodeword);
	EnterSuggestion(advancedmodelenght, advancedmodesuggestionOne);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionOne, advancedmodeword);
	EnterSuggestion(advancedmodelenght, advancedmodesuggestionTwo);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionOne, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionTwo, advancedmodeword);
	EnterSuggestion(advancedmodelenght, advancedmodesuggestionThree);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionOne, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionTwo, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionThree, advancedmodeword);
	EnterSuggestion(advancedmodelenght, advancedmodesuggestionFour);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionOne, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionTwo, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionThree, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionFour, advancedmodeword);
	EnterSuggestion(advancedmodelenght, advancedmodesuggestionFive);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionOne, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionTwo, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionThree, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionFour, advancedmodeword);
	PrintSuggestion(advancedmodelenght, advancedmodecountofcontains, advancedmodecountofcontainsinrightplace, advancedmodecountsdoesntcontain, advancedmodecontains, advancedmodecontainsrightplace, advancedmodedoesntcontain, advancedmodesuggestionFive, advancedmodeword);
}