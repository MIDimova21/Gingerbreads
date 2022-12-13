#pragma once

#include<iostream>
#include<Windows.h>
#include<iomanip>

#define GREEN 2
#define DARKBLUE 1
#define RED 4
#define WHITE 7
#define GOLD 6
#define AQUA 3

using namespace std;

void ClearScreen();

void ClearScreenMenu();

void displaymenu();

void Win();

void Lost();

void SetColor(int color);

void EnterSuggestion(int length, char suggestion[]);

void PrintSuggestion(int lenght, int countofcontains, int countofcontainsinrightplace, int countsdoesntcontain, char contains[], char containsrightpplace[], char doesntcontain[], char suggestion[], char word[]);