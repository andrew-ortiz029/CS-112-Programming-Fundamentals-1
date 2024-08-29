/*
Andrew Ortiz
Car Happy!
Makes a Linked List and Prints the Data from the Lists
*/

//header files, constants, and open text file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

//create a struct for our data types
struct cars
{
	char* carType;
	double price;
	int miles;
	struct cars* next;
};

//functions to find the averages in our data
void averagePrice(struct cars car1)
{
	struct cars* temp = &car1;
	double average = 0;
	int cnt = 0;
	while (temp != NULL)
	{
		average = average + temp->price;
		cnt++;
		temp = temp->next;
	}
	average = average / cnt;
	printf("The average price was: %.2lf\n", average);
}

void averageMiles(struct cars car1)
{
	struct cars* temp = &car1;
	int totalMiles = 0;
	while (temp != NULL)
	{
		totalMiles = totalMiles + temp->miles;
		temp = temp->next;
	}
	printf("The Total Miles: %d\n", totalMiles);
}

//function to print data 
void printData(struct cars car1)
{
	struct cars *temp = &car1;
	
	while (temp != NULL)
	{
		printf("Car: %s    Price: %.2lf    I drove it: %d\n", temp->carType, temp->price, temp->miles);
		temp = temp->next;
	}
}

int main()
{
	//hard code the data for each car
	struct cars car1;
	car1.carType = "56 Ford";
	car1.price = 500;
	car1.miles = 23000;
	car1.next = NULL;

	struct cars car2;
	car2.carType = "64 Impala";
	car2.price = 1800;
	car2.miles = 12000;
	car2.next = NULL;

	struct cars car3;
	car3.carType = "57 Ford";
	car3.price = 1400;
	car3.miles = 22000;
	car3.next = NULL;

	struct cars car4;
	car4.carType = "65 Galaxy";
	car4.price = 2600;
	car4.miles = 48000;
	car4.next = NULL;

	//link our data
	car1.next = &car2;
	car2.next = &car3;
	car3.next = &car4;

	//calls to our print functions
	printData(car1);
	averageMiles(car1);
	averagePrice(car1);
	
	return 0;
}