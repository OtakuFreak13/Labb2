#include"functions.h"


void printGame(char board[][3])
{
	printf("-------------\n");
	for (int i = 0; i < 3; i++)
	{
		printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
		if (i !=3-1)
			printf("|---|---|---|\n");
	}
	printf("-------------\n");
} 

void chooseSpot(char player, char XO)
{
	int spot;
	printf("%s choose where to put your %c. ", player, XO);
	scanf("%c", &spot);
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

int isWinner(char board[][3])
{

}


