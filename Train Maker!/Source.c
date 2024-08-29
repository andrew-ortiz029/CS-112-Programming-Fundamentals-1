/*
Andrew Ortiz
Train Maker!
Takes Train Data from a text file and prints it
*/

//header files, constants, and open text file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

//prints the data from each line
void printData(char carType[], double weight, int length, int horsePower, int num)
{
	printf("%s    Weight: %.2lf     Length: %d     Horsepower: %d  Number in train: %d\n", carType, weight, length, horsePower, num);
}

void printFooter(int totalCars, int totalLength, int totalHorsePower, int totalEngines)
{
	printf("\n");
	printf("There are %d cars in the train\n", totalCars);
	printf("The total length of the train is: %d\n", totalLength);
	printf("The total horsepower needed to pull this train is: %d\n", totalHorsePower);
	printf("The number of engines needed to pull the train is: %d\n", totalEngines);
}

int main()
{
	// test and open input file and output file.
	if (!(fp = fopen("traindata.txt", "r"))) 
	{
		printf("traindata.txt could not be opened for input.");
		exit(1);
	}

	//define array and variables
	char carType[10];
	double weight;
	int length;
	int horsePower;
	int num;
	int totalCars = 0;
	int totalLength = 0;
	int totalHorsePower = 0;
	int totalEngines = 0;

	//print out header
	printf("Current Train Cars\n");

	//loop through file and print
	while (!feof(fp)) 
	{
		fscanf(fp, "%s %lf %d %d %d\n", &carType, &weight, &length, &horsePower, &num);
		printData(carType, weight, length, horsePower, num);
		totalCars = totalCars + num;
		totalLength = totalLength + length;
		totalHorsePower = totalHorsePower + horsePower * num;
	}
	
	//calculate for the number of engines
	totalEngines = (totalHorsePower / 1000) + 1;
	
	//print footer
	printFooter(totalCars, totalLength, totalHorsePower, totalEngines);
	
	fclose(fp);
	return 0;
}