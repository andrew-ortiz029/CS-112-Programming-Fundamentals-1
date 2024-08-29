//header files
#include <stdio.h>
FILE* fp;

	int main()
	{
		//defining variables for calculations
		//as well as opening the csis.txt file
		int initialTempC = 0, initialA = 0, finalA = 0;
		double finalTempF = 0;
		fopen_s(&fp, "csis.txt", "w");

		//print and user input
		printf("Please enter the intitial Celcius temperature: ");
		fprintf(fp, "Please enter the intitial Celcius temperature: \n");
		scanf_s("%d", &initialTempC);
		printf("Please enter the initial altitude: ");
		fprintf(fp, "Please enter the initial altitude: \n");
		scanf_s("%d", &initialA);
		printf("Please enter the final altitude: ");
		fprintf(fp, "Please enter the final altitude: \n");
		scanf_s("%d", &finalA);

		//calculations
		initialTempC =  (initialTempC / 5 * 9 + 32);
		finalTempF = (double)initialTempC - (finalA - initialA) / 185.9;

		//print result
		printf("The temp in farhenheit at 6752 feet is: %.1lf", finalTempF);
		fprintf(fp, "The temp in farhenheit at 6752 feet is: &.1lf\n", finalTempF);

		return 0;
	}