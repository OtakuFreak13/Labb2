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
} 

void chooseSpot(char *spot,char board[][3], char player[], char XO)
{

	printf("%s choose in which square you would like to put your %c. ", player, XO);
	*spot = getChar();

	while (*spot == 'X' || *spot == 'O')
	{
		printf("\n%s you have chosen a spot that's allready taken. \nPlease choose a valid square in which to put your %c. ", player, XO);
		*spot = getChar();
	}
	
	while (isPosPossible(*spot, board) == 0 )
	{
		printf("\n%s you have chosen a invalid spot. \nPlease choose a valid square in which to put your %c. ", player, XO);
		*spot = getChar();
		while (*spot == 'X' || *spot == 'O')
		{
			printf("\n%s you have chosen a spot that's allready taken. \nPlease choose a valid square in which to put your %c. ", player, XO);
			*spot = getChar();
		}
	}
}

int isPosPossible(char pos, char board[][3]) 
{
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

char getChar()
{
	char c, d;
	do
	{
		c = getchar();
		if (c != '\n')
			d = c;
	} while (c != '\n');
	return d;
}

void switcheroo(char board[][3], char *spot, char *XO)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == *spot)
			{
				board[i][j] = *XO;
			}
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
	name1[strlen(name1) - 1] = '\0';
}

void draw(char board[][3], int *finish)
{
	int returnValue = 0;
	if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
	{
		printf("The game is a draw!\n");
		*finish = 1;
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
		}
	}
	return returnValue;
}

	



