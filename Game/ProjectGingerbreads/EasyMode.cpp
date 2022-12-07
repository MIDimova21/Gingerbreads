#include<iostream>
#include<time.h> // time
#include<cstdlib> // rand, srand
using namespace std;

void EasyGenerator()
{
	// seeds random number
	srand(time(0)); 
	srand(time(NULL));
	string easymodewords[30] = {
		"rain", "play", "lean", "stab", "seed",
		"tape", "land", "bowl", "camp", "fork",
		"crew", "dual", "pack", "hand", "sour",
		"cost", "rank", "star", "scar", "wood",
		"year", "mood", "love", "like", "hate",
		"near", "nail", "hair", "sore", "race"
	};

	// generates the index of the word in the array and its variable and saves the word in a new variable
	int index = rand() % 30;
	string word = easymodewords[index]; 

	string totable[1][4] = {
		//in incoming commit
	}
}