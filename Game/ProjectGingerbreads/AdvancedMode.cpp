#include<iostream>
#include<time.h> // time
#include<cstdlib> // rand, srand
using namespace std;

void AdvancedGenerator()
{
	// seeds random number
	srand(time(0));
	srand(time(NULL));
	string advancedmodewords[30] = {
		"action", "based", "cheat", "dairy", "depot",
		"enter", "land", "bowl", "camp", "fork",
		"crew", "fault", "flare", "ledge", "mania",
		"mayor", "merge", "sence", "wince", "state",
		"hause", "drink", "quote", "quart", "until",
		"yacht", "repay", "orbit", "oasis", "irony"
	};

	// generates the index of the word in the array and its variable and saves the word in a new variable
	int index = rand() % 30;
	string word = advancedmodewords[index];

	string totable[1][4] = {
		//in incoming commit
	}
}