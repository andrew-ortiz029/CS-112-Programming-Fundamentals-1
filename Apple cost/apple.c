#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int numPounds = 0;
	double costPerPound = 0;
	double totalCost = 0;

	printf("Welcome to Apple Cost!\n");
	printf("Enter the number of pounds purchased: ");
	scanf_s("%d", &numPounds);
	printf("\n");
	printf("Enter the cost per pound: ");
	scanf_s("%lf", &costPerPound);

	totalCost = numPounds * costPerPound;

	printf("The total cost is: %lf\n", totalCost);
	system("pause");
}