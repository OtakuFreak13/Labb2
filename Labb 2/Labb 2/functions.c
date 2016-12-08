#include"functions.h"


void printGame(char board[][3])
{
	printf("\n|---|---|---|\n");

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

void chooseSpot(char spot,char board[][3], char player[], char XO)
{
	//printf("---->%s", &player);
	//printf("---->%c", XO);
	printf("%s choose in which square you would like to put your %c. ", player, XO);
	scanf("%c", &spot);
	getchar();
	while (spot == 'X' || spot == 'O')
	{
		printf("\n%s you have chosen a spot that's allready taken. \nPlease choose a valid square in which to put your %c. ", player, XO);
		scanf("%c", &spot);
		getchar();
	}
	


	while (isPosPossible(spot, board) == 0)
	{
		printf("\n%s you have chosen a invalid spot. \nPlease choose a valid square in which to put your %c. ", player, XO);
		scanf("%c", &spot);
		getchar();
	}
	printf("Next players turn.");
}

int isPosPossible(char pos, char board[][3]) 
{

	//int posToCheck = (int)pos;
	int valid = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (pos == board[i][j])
			{
				valid = 1;
			}
		}
	}
	

	return valid;


}

void switcheroo(char *board[][3], char *spot)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			char temp = board[i][j];
			*spot = board[i][j];
			*board[i][j] = temp;
		}
	}

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
			if (board[i][j] != '1' && board[i][j] != '2' && board[i][j] != '3' && board[i][j] != '4' && board[i][j] != '5' && board[i][j] != '6' && board[i][j] != '7' && board[i][j] != '8' && board[i][j] != '9')
			{
				printf("The game is a draw!\n");
			}
		}
	}
}

int isWinner(char board[][3])
{
	int returnValue = 0; 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
			{
				returnValue = 1;
			}
			if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
			{
				returnValue = 1;
			}
			if (((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])))
			{
				returnValue = 1;
			}
			else 
			{
				returnValue = 0;
			}
		}

	}

	return returnValue;
	
	
}

	



