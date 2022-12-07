#include "../ProjectGingerbreads/AdvancedMode.h"
#include<iostream>
#include<time.h> // time
#include<cstdlib> // rand, srand
using namespace std;

void ChristmasGenerator()
{
	// seeds random number
	srand(time(NULL));
	string christmasmodewords[30] = {
		"angel", "bells", "boots", "candy", "white",
		"comfy", "elves", "faith", "camp", "gifts",
		"light", "hopes", "magic", "night", "stars",
		"santa", "scarf", "skate", "scent", "songs",
		"stand", "drink", "trees", "visit", "holly",
		"wraps", "x-mas", "youth", "films", "warmt"
	};

	// generates the index of the word in the array and its variable and saves the word in a new variable
	int index = rand() % 30;
	string word = christmasmodewords[index];

	string totable[1][4] = {
		//in incoming commit
	}
}