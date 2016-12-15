#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functions.h"

int main()
{

	char board[3][3] = {
		{ '1', '2', '3' },
		{ '4', '5', '6' },
		{ '7', '8', '9' }
	};

	char spot = 0;

	char playerOne[30];
	name(&playerOne);

	char playerTwo[30];
	name(&playerTwo);

	int finish = 0;

	while (finish == 0)
	{	

		printGame(board);
		char XO = 'X';
		chooseSpot(&spot, board, playerOne, XO);

		switcheroo(board, &spot, &XO);
		if (isWinner(board) == 1)
		{
			printf("\nCongratulations! %s you have won the game!", playerOne);
			finish = 1;
			printGame(board);
		}

		if (isWinner(board) == 0)
		{
			draw(board, &finish);
			if (finish == 1)
			{
				printGame(board);
			}
		}

		if (isWinner(board) == 0 && finish != 1)
		{
			printGame(board);
			char XO = 'O';
			chooseSpot(&spot, board, playerTwo, XO);
			switcheroo(board,&spot, &XO);
			if (isWinner(board) == 1)
			{
				printf("\nCongratulations! %s you have won the game!", playerTwo);
				finish = 1;
				printGame(board);
			}
		}
	}

	getchar();
	return 0;
}