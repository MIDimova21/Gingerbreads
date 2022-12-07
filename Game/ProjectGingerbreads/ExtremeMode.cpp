#include "../ProjectGingerbreads/ExtremeMode.h"
#include<iostream>
#include<time.h> // time
#include<cstdlib> // rand, srand
using namespace std;

void ExtremeGenerator()
{
	// seeds random number
	srand(time(NULL));
	string extrememodewords[30] = {
		"snazzy", "avatar", "diadem", "guitar", "miacid",
		"ocelot", "burgle", "gnomic", "clutch", "schist",
		"callow", "gneiss", "panzer", "harbor", "mohawk",
		"anoxia", "quahog", "slithy", "proton", "nettly",
		"velvet", "whinge", "gerbil", "harbor", "bathos",
		"tattoo", "acetic", "python", "xystis", "dengue"
	};

	// generates the index of the word in the array and its variable and saves the word in a new variable
	int index = rand() % 30;
	string word = extrememodewords[index];

	string totable[1][4] = {
		//in incoming commit
	}
}