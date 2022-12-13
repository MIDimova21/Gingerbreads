#pragma once

#include<iostream>
#include<Windows.h>
#include<iomanip>

#define GREEN 0
#define RED 4
#define WHITE 7
#define GOLD 6

using namespace std;

void ClearScreen();

void ClearScreenMenu();

void displaymenu();

void Win();

void Lost();

void SetColor(int color);

void EnterSuggestion(int length, char suggestion[]);

void ContainsRightPlace(int countofcontainsinrightplace, char containsrightplace[], char suggest, int i);

void Contains(int length, int countofcontains, char contains[], char suggest, int i);

void DoesntContain(int length, int countdoesntcontain, char doesntcontain[], char suggest, int i);

void CheckIfContains(char word[], int i, int lenght, int suggestion, char doesntcontain[], char contains[], char containsrightplace[], int countdoesntcontain, int countofcontains, int countofcontainsinrightplace);

void PrintSuggestion(int length, char suggestion[]);