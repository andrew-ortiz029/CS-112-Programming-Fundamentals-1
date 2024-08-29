/*
Andrew Ortiz
Where the Rubber Meets the Road!
Checks whether or not the users tire specifications are valid
*/

#define _CRT_SECURE_NO_WARNINGS

//header files, constants, and open text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char tire[20];
	printf("Enter a prospective tire code with the format P215/65R15/95H: ");
	scanf("%s", tire);
	
	//gets the intened car type for the tire
	char *tireUse = strpbrk(&tire[0], "pP");
	
	/*if (tireUse != NULL)
	{
		printf("%c\n", *tireUse);
	}
	else {
		printf("The car type for the tire isn't valid");
	}*/

	//gets the value of the width of the tire
	int width = atoi(&tire[1]);
	//printf("%d\n", width);
	

	//gets the value of the height of the tire
	int height = atoi(&tire[5]);
	//printf("%d\n", height);

	//gets the contruction type
	char *construction = strpbrk(&tire[7], "rRbB");
	//printf("%c\n", *construction);

	//gets the value of the rim diameter
	int rim = atoi(&tire[8]);
	//printf("%d\n", rim);

	//gets the valus of the load index
	int load = atoi(&tire[11]);
	//printf("%d\n", load);

	//gets the value of the speed rating
	char* speed = strpbrk(&tire[13], "sStTuUhHvV");
	//printf("%c", *speed);

	//check and print whether or not the code is valid
	int check1 = 0, check2 = 0, check3= 0, check4 = 0, check5 = 0, check6 = 0, check7 = 0;
	if (tireUse == NULL)
	{
		check1 = 1;
	}
	else if(width < 155 || height > 305)
	{
		check2 = 1;
	}
	else if (height < 30 || height > 70)
	{
		check3 = 1;
	}
	else if (construction == NULL)
	{
		check4 = 1;
	}
	else if (rim < 14 || rim > 22)
	{
		check5 = 1;
	}
	else if (load < 50 || load > 99)
	{
		check6 = 1;
	}
	else if (speed == NULL)
	{
		check7 = 1;
	}

	if (check1 != 0 || check2 != 0 || check3 != 0 || check4 != 0 || check5 != 0 || check6 != 0 || check7 != 0)
	{
		printf("Your tire code is invalid.\n");
	}
	else if (check1 == 0 && check2 == 0 && check3 == 0 && check4 == 0 && check5 == 0 && check6 == 0 && check7 == 0)
	{
		printf("Your tire code is valid.\n");
	}
	
	if (check1 != 0)
	{
		printf("The car type for the tire isn't valid\n");
	}
	else if (check2 != 0)
	{
		printf("The width of your tire isn't valid\n");
	}
	else if (check3 != 0)
	{
		printf("The sidewall height of your tire isn't valid\n");
	}
	else if (check4 != 0)
	{
		printf("The construction type of your tire isn't valid\n");
	}
	else if (check5 != 0)
	{
		printf("The rim diameter of your tire isn't valid\n");
	}
	else if (check6 != 0)
	{
		printf("The load index of your tire isn't valid\n");
	}
	else if (check7 != 0)
	{
		printf("The speed rating of your tire isn't valid\n");
	}

	return 0;
}