/*Andrew Ortiz
  Paul Bunyan
  Calculates how many years to cut 1000 tree at the depreation rate of 13% of the current amount of trees
*/

//header files, constants, and open text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

//constant for the rate of tree being cut
const float rate = .13;

void trees()
{
	//variables needed for calculations
	int trees = 1000;
	int years = 0;
	
	//loop for calculations
	printf("Number of remaining trees: %d\n", trees);
	fprintf(fp, "Number of remaining trees: %d\n", trees);
	while (trees > 50)
	{
		trees = trees - trees * rate;
		printf("Number of remaining trees: %d\n", trees);
		fprintf(fp, "Number of remaining trees: %d\n", trees);
		years++;
	}
	printf("Number of years is: %d\n", years);
	fprintf(fp, "Number of years is: %d\n", years);
}

void careerTrees()
{
	//variables needed for calcultions
	int trees = 1000;
	int years = 0;
	int treesPlanted;
	printf("How many trees planted each year? \n ");
	fprintf(fp, "How many trees planted each year?\n %d", &treesPlanted);
	scanf_s("%d", &treesPlanted);
	fscanf_s(fp, "%d", &treesPlanted);
	
	//loop for calculations
	printf("Number of remaining trees: %d\n", trees);
	fprintf(fp, "Number of remaining trees: %d\n", trees);
	while (trees > 50)
	{
		trees = trees - trees * rate;
		trees = trees + treesPlanted;
		printf("Number of remaining trees: %d\n", trees);
		fprintf(fp, "Number of remaining trees: %d\n", trees);
		years++;
	}
	printf("Number of years is: %d\n", years);
	fprintf(fp, "Number of years is: %d\n", years);
}
int main()
{
	//open the text file
	fopen_s(&fp, "csis.txt", "w");
	
	//call to function
	trees();
	
	//call to career trees function
	careerTrees();
	return 0;
}