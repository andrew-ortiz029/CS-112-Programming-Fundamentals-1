/*
Andrew Ortiz
Fore!
Calculates the golfers end score after all 18 holes
*/

//header files, constants, and open text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

void assign(int holeNumber, int array[])
{
	//function to assign values to the player score array
	int temp = 0;
	printf("Enter score on hole number: %d ", holeNumber);
	fprintf(fp, "Enter score on hole number: %d ", holeNumber);
	scanf_s("%d", &temp);
	array[holeNumber - 1] = temp;
}

int results(int holeNumber, int par[], int score[], int pars, int birdies, int bogeys)
{
	//function to print the results of the holes
	
	if(par[holeNumber - 1] > score[holeNumber - 1])
	{
		printf("The score on hole # %d was: %d    Par is: %d - Birdie!\n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		fprintf(fp, "The score on hole # %d was: %d    Par is: %d - Birdie \n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		birdies = birdies + 1;
	} else if(par[holeNumber - 1] < score[holeNumber - 1])
	{
		printf("The score on hole # %d was: %d    Par is: %d - Bogey! \n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		fprintf(fp, "The score on hole # %d was: %d    Par is: %d - Bogey! \n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		bogeys = bogeys + 1;
	} else if(par[holeNumber - 1] = score[holeNumber - 1])
	{
		printf("The score on hole # %d was: %d    Par is: %d - Par \n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		fprintf(fp, "The score on hole # %d was: %d    Par is: %d - Par \n", holeNumber, score[holeNumber - 1], par[holeNumber - 1]);
		pars = pars + 1;
	}
}

int main()
{
	//open text file
	fopen_s(&fp, "csis.txt", "w");

	//define variables and arrays of the par values and player scores
	int totalScore = 0;
	int pars = 0;
	int birdies = 0;
	int bogeys = 0;
	int par[9] = { 4, 5, 4, 5, 4, 3 ,4, 3, 4 };
	int playerScore[9];

	//scan for scores using assign function
	assign(1, playerScore);
	totalScore = totalScore + playerScore[0];
	assign(2, playerScore);
	totalScore = totalScore + playerScore[1];
	assign(3, playerScore);
	totalScore = totalScore + playerScore[2];
	assign(4, playerScore);
	totalScore = totalScore + playerScore[3];
	assign(5, playerScore);
	totalScore = totalScore + playerScore[4];
	assign(6, playerScore);
	totalScore = totalScore + playerScore[5];
	assign(7, playerScore);
	totalScore = totalScore + playerScore[6];
	assign(8, playerScore);
	totalScore = totalScore + playerScore[7];
	assign(9, playerScore);
	totalScore = totalScore + playerScore[8];

	//print out results
	printf("   ------- Golf Score Calculator -------\n");
	//fprintf(fp, "   ------- Golf Score Calculator -------\n");
	results(1, par, playerScore, pars, birdies, bogeys);
	if (par[0] > playerScore[0])
	{
		birdies = birdies + 1;
	}
	else if (par[0] < playerScore[0])
	{
		bogeys = bogeys + 1;
	}
	else if (par[0] = playerScore[0])
	{
		pars = pars + 1;
	}
	results(2, par, playerScore, pars, birdies, bogeys);
	if (par[1] > playerScore[1])
	{
		birdies = birdies + 1;
	}
	else if (par[1] < playerScore[1])
	{
		bogeys = bogeys + 1;
	}
	else if (par[1] = playerScore[1])
	{
		pars = pars + 1;
	}
	results(3, par, playerScore, pars, birdies, bogeys);
	if (par[2] > playerScore[2])
	{
		birdies = birdies + 1;
	}
	else if (par[2] < playerScore[2])
	{
		bogeys = bogeys + 1;
	}
	else if (par[2] = playerScore[2])
	{
		pars = pars + 1;
	}
	results(4, par, playerScore, pars, birdies, bogeys);
	if (par[3] > playerScore[3])
	{
		birdies = birdies + 1;
	}
	else if (par[3] < playerScore[3])
	{
		bogeys = bogeys + 1;
	}
	else if (par[3] = playerScore[3])
	{
		pars = pars + 1;
	}
	results(5, par, playerScore, pars, birdies, bogeys);
	if (par[4] > playerScore[4])
	{
		birdies = birdies + 1;
	}
	else if (par[4] < playerScore[4])
	{
		bogeys = bogeys + 1;
	}
	else if (par[4] = playerScore[4])
	{
		pars = pars + 1;
	}
	results(6, par, playerScore, pars, birdies, bogeys);
	if (par[5] > playerScore[5])
	{
		birdies = birdies + 1;
	}
	else if (par[5] < playerScore[5])
	{
		bogeys = bogeys + 1;
	}
	else if (par[5] = playerScore[5])
	{
		pars = pars + 1;
	}
	results(7, par, playerScore, pars, birdies, bogeys);
	if (par[6] > playerScore[6])
	{
		birdies = birdies + 1;
	}
	else if (par[6] < playerScore[6])
	{
		bogeys = bogeys + 1;
	}
	else if (par[6] = playerScore[6])
	{
		pars = pars + 1;
	}
	results(8, par, playerScore, pars, birdies, bogeys);
	if (par[7] > playerScore[7])
	{
		birdies = birdies + 1;
	}
	else if (par[7] < playerScore[7])
	{
		bogeys = bogeys + 1;
	}
	else if (par[7] = playerScore[7])
	{
		pars = pars + 1;
	}
	results(9, par, playerScore, pars, birdies, bogeys);
	if (par[8] > playerScore[8])
	{
		birdies = birdies + 1;
	}
	else if (par[8] < playerScore[8])
	{
		bogeys = bogeys + 1;
	}
	else if (par[8] = playerScore[8])
	{
		pars = pars + 1;
	}
	printf("\n");
	//fprintf(fp, "\n");
	printf("Par is: 36 - total score was: %d", totalScore);
	//fprintf("Par is: 36 - total score was: %d", totalScore);
	printf("\n");
	fprintf(fp, "\n");
	printf("Number of pars: %d\n", pars);
	printf("Number of birdies: %d\n", birdies);
	printf("Number of bogeys: %d\n", bogeys);
	fprintf(fp, "Number of pars: %d\n", pars);
	//fprintf(fp, "Number of birdies: &d\n", birdies);
	fprintf(fp, "Number of bogeys: %d\n", bogeys);

	return 0;
}

