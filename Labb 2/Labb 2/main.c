#include<stdio.h>
#include<string.h>
#include"functions.h"

int main()
{
	int spot = 0;
	char playerOne[30];
	name(&playerOne);

	char playerTwo[30];
	name(&playerTwo);
	
	printf("%s \n%s", playerOne, playerTwo);




	printGame(board);

	printf("%s", board);
			if (board[0][0] == 1 || board[0][0] == 2 || board[0][0] == 3 || board[0][0] == 4 || board[0][0] == 5 || board[0][0] == 6 || board[0][0] == 7 || board[0][0] == 8 || board[0][0] == 9)
			{
				printf("nope\n");
			}
			if (board[1][0] == 1)
			{
				printf("yep\n");
			}




	/*while (isWinner == 0)
	{
		printGame(board);
		char XO = 'X';
		chooseSpot(spot, playerOne, XO);
		if (isWinner == 1)
		{
			printf("Congratulations! %s you have won the game!", playerOne);
		}

		if (isWinner == 0)
		{
			printGame(board);
			char XO = 'O';
			chooseSpot(spot, playerTwo, XO);
			if (isWinner == 1)
			{
				printf("Congratulations! %s you have won the game!", playerTwo);
			}
		}

		if (isWinner == 0)
		{
			if (board[0][0] != 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9)
			{

			}
		}

	}
*/





	getchar();
	return 0;
}