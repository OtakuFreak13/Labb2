#ifndef FUNCTION_H
#define FUNCTONS_H

#include<stdio.h>
#include<string.h>


void printGame(char board[][3]);

int isWinner(char board[][3]);

char board[3][3];

void switcheroo(char *board, char *spot);

void chooseSpot(char spot, char board[][3], char player[], char XO);

void name(char *name1);

int draw(char board[][3]);

int isPosPossible(char pos, char board[][3]);


#endif // !FUNCTION_H
