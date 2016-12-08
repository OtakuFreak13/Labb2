#include"functions.h"


void printGame(char board[][3])
{
	printf("|---|---|---|\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("| %c ", board[i][j]);
		}
		printf("|\n|---|---|---|\n");
	}

	//printf("-------------\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
	//	//if (i !=3-1)
	//		printf("|---|---|---|\n");
	//}
	//printf("-------------\n");
} 

void chooseSpot(int spot, char player[], char XO)
{
	//printf("---->%s", &player);
	//printf("---->%c", XO);
	printf("%s choose which square you would like to put your %c. ", player, XO);
	scanf("%c", &spot);
	while (spot == 'X' || spot == 'O' || 1>spot>9)
	{
		printf("\n%s you have chosen a invalid spot. \nPlease choose a valid square in which to put your %c. ", player, XO);
		scanf("%c", &spot);
	}
}

void switcheroo(char *a, char *b)
{
	char temp = a;
	*a = b;
	*b = temp;

}

char board[3][3] = {
	{ '1', '2', '3' },
	{ '4', '5', '6' },
	{ '7', '8', '9' }
};

void name (char *name1)
{
	printf("What is your name? ");
	fgets(name1, 29, stdin);
}

int draw(char board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != 1 )
			{

			}
		}
	}
}

int isWinner(char board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][0] == board[i][1] == board[i][2])
			{
				//if (board[0][j] == board[1][j] == board[2][j] == 'X')
				//{
				//	printf("Congratulations! X has won the game!");
				//}
				//if(board[0][j] == board[1][j] == board[2][j] == 'O')
				//{
				//	printf("Congratulations! O has won the game!");
				//}
				return 1;
			}
			if (board[0][j] == board[1][j] == board[2][j])
			{
				//if (board[0][j] == board[1][j] == board[2][j] == 'X')
				//{
				//	printf("Congratulations! X has won the game!");
				//}
				//if (board[0][j] == board[1][j] == board[2][j] == 'O')
				//{
				//	printf("Congratulations! O has won the game!");
				//}
				return 1;

			}
			if ((board[0][0] == board[1][1] == board[2][2]) || (board[0][2] == board[1][1] == board[2][0]))
			{
				//if (board[0][0] == board[1][1] == board[2][2] || board[0][2] == board[1][1] == board[2][0] == 'X')
				//{
				//	printf("Congratulations! X has won the game!");
				//}
				//if (board[0][0] == board[1][1] == board[2][2] || board[0][2] == board[1][1] == board[2][0] == 'O')
				//{
				//	printf("Congratulations! O has won the game!");
				//}
				return 1;

			}
			else 
			{
				return 0;
			}
		}

	}
	
	
}

	



