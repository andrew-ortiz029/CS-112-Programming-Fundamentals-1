/*
Andrew Ortiz
Bet on it!
Tracks statistics of gambling
*/

//header files, constants, and open text file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;
FILE* csit;


void printReportHeader()
{
	printf("   WAGER       WON       LOSS       STASH   \n");
	printf("   -----       ---       ----       -----   \n");
	fprintf(csit, "   WAGER       WON       LOSS       STASH   \n");
	fprintf(csit, "   -----       ---       ----       -----   \n");
}

double initialStash(double bet, double stash, double payoff, double startingStash)
{
	stash = bet;
	startingStash = bet;
	printf("Starting Stash                     %.2lf \n", startingStash);
	fprintf(csit, "Starting Stash                     %.2lf \n", startingStash);
	return stash;
}

double addToStash(double bet, double stash, double payOff, int numWon, double amtWon)
{
	stash = stash + bet;
	printf("Won!           %.2lf               %.2lf \n", bet, stash);
	fprintf(csit, "Won!           %.2lf               %.2lf \n", bet, stash);
	return stash;
}

double lossFromStash(double bet, double stash, double payOff, int numLost, double amtLost)
{
	stash = stash - bet;
	printf("Lost!          %.2lf              %.2lf \n", bet, stash);
	fprintf(csit, "Lost!          %.2lf              %.2lf \n", bet, stash);
	return stash;
}

void printReportFooter(int numWon, double amtWon, int numLost, double amtLost, 
	double startingStash, double payOff, double endingStash)
{
	printf("Total number Wins: %d\n", numWon);
	printf("Total amount Wins: %.2lf\n", amtWon);
	printf("Total number Losses: %d\n", numLost);
	printf("Total amount Losses: %.2lf\n", amtLost);
	printf("\n");
	printf("Starting Stash: %.2lf\n", startingStash);
	printf("Total payoff charge: %.2lf\n", payOff);
	printf("Closing Stash: %.2lf\n", endingStash);
	fprintf(csit, "Total number Wins: %d\n", numWon);
	fprintf(csit, "Total amount Wins: %.2lf\n", amtWon);
	fprintf(csit, "Total number Losses: %d\n", numLost);
	fprintf(csit, "Total amount Losses: %.2lf\n", amtLost);
	fprintf(csit, "\n");
	fprintf(csit, "Starting Stash: %.2lf\n", startingStash);
	fprintf(csit, "Total payoff charge: %.2lf\n", payOff);
	fprintf(csit, "Closing Stash: %.2lf\n", endingStash);
}

int main()
{
	// set up variables
	char code;
	double bet, payOff, stash, amtWon, amtLost, startingStash, endingStash;
	int numWon, numLost;

	// test and open input file and output file.
	if (!(fp = fopen("wagers.txt", "r"))) {
		printf("wagers.txt could not be opened for input.");
		exit(1);
	}
	
	if (!(csit = fopen("csit.txt", "w"))) {
		printf("csit.txt could not be opened for output.");
		exit(1);
	}

	//initialize variable values
	bet = payOff = stash = amtWon = amtLost = startingStash = endingStash = 0.0;
	numWon = numLost = 0;

	// print out report header
	printReportHeader();
	// loop through file
	while (!feof(fp)) {
		fscanf(fp, "%c %lf\n", &code, &bet);
		if (code == 'D') {// initial deposit
			startingStash = stash = initialStash(bet, stash, payOff, startingStash);
		}
		else if (code == 'W') {// a win
			amtWon = amtWon + bet;
			numWon = numWon + 1;
			payOff = payOff + bet * .1;
			stash = addToStash(bet, stash, payOff, numWon, amtWon);
		}
		else { // must have been a loss
			stash = lossFromStash(bet, stash, payOff, numLost, amtLost);
			amtLost = amtLost + bet;
			numLost = numLost + 1;
			payOff = payOff + bet * .05;
		}
	}
	// final calculation of profit or loss
	endingStash = stash - payOff;

	// print out summary
	printReportFooter(numWon, amtWon, numLost, amtLost, startingStash, payOff,
		endingStash);

	// close data and output file
	fclose(csit);
	fclose(fp);
	return 0;
}