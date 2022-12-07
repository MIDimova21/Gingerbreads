#include<iostream>
#include<time.h> // time
#include<cstdlib> // rand, srand
using namespace std;

void Generator()
{
	srand(time(0)); // seeds random number
	srand(time(NULL));
	string easymodewords[30] = {
		"rain", "play", "lean", "stab", "seed",
		"tape", "land", "bowl", "camp", "fork",
		"crew", "dual", "pack", "hand", "sour",
		"breed", "rank", "star", "scar", "wood",
		"year", "mood", "love", "like", "hate",
		"near", "nail", "hair", "sore", "race"
	};

	int index = rand() % 30;
	string word = easymodewords[index];

	string totable[1][4] = {

	}
}

void 