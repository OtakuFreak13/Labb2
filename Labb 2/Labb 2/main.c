#include<stdio.h>
#include<string.h>
#include"functions.h"

int main()
{
	int turn = 1;
	char playerOne[30];
	name(&playerOne);

	char playerTwo[30];
	name(&playerTwo);
	
	printf("%s \n%s", playerOne, playerTwo);
	//if(turn = 1,3,5,7,9)
	//{
	//	printGame(board);
	//	char XO = 'X';
	//	chooseSpot(playerOne, XO);
	//	turn++;
	//} 
	//
	//if (turn = 2,4,6,8)
	//{
	//	printGame(board);
	//	char XO = 'O';
	//	chooseSpot(playerTwo, XO);
	//	turn++;
	//}

	//printGame(board);



	getchar();
	return 0;
}