#include<stdio.h>
#include<string.h>
#include"functions.h"

int main()
{
	char spot = 0;
	char playerOne[30];
	name(&playerOne);

	char playerTwo[30];
	name(&playerTwo);

	printf("%s \n%s", playerOne, playerTwo);




	//printGame(board);

	//printf("%s", board);
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		if (board[i][j] == '1' || board[i][j] == '2' || board[i][j] == '3' || board[i][j] == '4' || board[i][j] == '5' || board[i][j] == '6' || board[i][j] == '7' || board[i][j] == '8' || board[i][j] == '9')
	//		{
	//			printf("yey\n");
	//		}
	//		if (board[2][2] == '9')
	//		{
	//			printf("yep\n");
	//		}
	//		if (board[i][j] != '1' && board[i][j] != '2' && board[i][j] != '3' && board[i][j] != '4' && board[i][j] != '5' && board[i][j] != '6' && board[i][j] != '7' && board[i][j] != '8' && board[i][j] != '9')
	//		{
	//			printf("\n");
	//		}
	//	}
	//}



	while (isWinner(board) == 0)
	{
		printGame(board);
		char XO = 'X';
		chooseSpot(spot, board, playerOne, XO);
		switcheroo(&board, &spot);
		if (isWinner(board) == 1)
		{
			printf("Congratulations! %s you have won the game!", playerOne);
		}

		if (isWinner(board) == 0)
		{
			printGame(board);
			char XO = 'O';
			chooseSpot(spot, board, playerTwo, XO);
			switcheroo(&board, &spot);
			if (isWinner(board) == 1)
			{
				printf("Congratulations! %s you have won the game!", playerTwo);
			}
		}

		if (isWinner(board) == 0)
		{
			draw(board);
		}

	}






	getchar();
	return 0;
}