#ifndef FUNCTION_H
#define FUNCTONS_H

#include<stdio.h>
#include<string.h>


void printGame(char board[][3]);

int isWinner(char board[][3]);

char board[3][3];

void switcheroo(char *a, char *b);

void chooseSpot(int spot, char player[], char XO);

void name(char *name1);

int draw(char board[][3]);



#endif // !FUNCTION_H
