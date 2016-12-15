#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printGame(char board[][3]);

int isWinner(char board[][3]);

void switcheroo(char board[][3], char *spot, char *XO);

void chooseSpot(char *spot, char board[][3], char player[], char XO);

void name(char *name1);

void draw(char board[][3], int *finish);

int isPosPossible(char pos, char board[][3]);

char getChar();


#endif // !FUNCTION_H
