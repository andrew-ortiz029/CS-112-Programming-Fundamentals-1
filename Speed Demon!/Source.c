/*Andrew Ortiz
  Speed Demon
  A program that calculates the punishment recieved for speeding tickets
*/

//header files, constants, and open text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

const float fineOne = 238.00;
const float fineTwo = 367.00;
const float fineThree = 490.00;
const float fineFour = 900.00;

void speed(int speedLimit, int clockedSpeed, int amountOfTickets)
{
	//calculations
	if (clockedSpeed - speedLimit >= 0 && clockedSpeed - speedLimit <= 15)
	{
		printf("You are fined: %.2f \n", fineOne);
		fprintf(fp, "You are fined: %.2f \n", fineOne);
	}
	else if (clockedSpeed - speedLimit >= 16 && clockedSpeed - speedLimit <= 25) {
		printf("You are fined: %.2f \n", fineTwo);
		fprintf(fp, "You are fined: %.2f \n", fineTwo);
	}
	else if (clockedSpeed - speedLimit >= 26 && clockedSpeed - speedLimit <= 100) {
		if (amountOfTickets > 1) {
			printf("You are fined: %.2f \n", fineThree);
			fprintf(fp, "You are fined: %.2f \n", fineThree);
			printf("Your license is suspended for 6 months \n");
			fprintf(fp, "Your license is suspended for 6 months \n");
		}
		else {
			printf("You are fined: %.2f \n", fineThree);
			fprintf(fp, "You are fined: %.2f \n", fineThree);
		}
	}
	else if (clockedSpeed - speedLimit > 100) {
		if (amountOfTickets > 1) {
			printf("You are fined: %.2f \n", fineFour);
			fprintf(fp, "You are fined: %.2f \n", fineFour);
			printf("Your license is suspended for 6 months \n");
			fprintf(fp, "Your license is suspended for 6 months \n");
		}
		else {
			printf("You are fined: %.2f \n", fineFour);
			fprintf(fp, "You are fined: %.2f \n", fineFour);
		}
	}
}

int main()
{
	fopen_s(&fp, "csis.txt", "w");
	//define variables
	int speedLimit;
	int clockedSpeed;
	int amountOfTickets;
	
	//print statements and user input
	printf("Enter the speed limit: ");
	fprintf(fp, "Enter the speed limit \n");
	scanf_s(" %d", &speedLimit);

	printf("Enter clocked speed: ");
	fprintf(fp, "Enter clocked speed \n");
	scanf_s(" %d", &clockedSpeed);
	
	printf("How many tickets have you received in the last year? ");
	fprintf(fp, "How many tickets have you recieved in the last year? \n");
	scanf_s(" %d", &amountOfTickets);
	
	//call to the function
	speed(speedLimit, clockedSpeed, amountOfTickets);
	
	return 0;
}

