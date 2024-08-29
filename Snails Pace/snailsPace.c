#include <stdio.h>
//header file


	int main()
	{
		int worldDiameter = 24901;
		int ftPerMile = 5280;
		int hoursPerDay = 24;
		int daysPerYear = 365;
		//varibles needed for calculations

		int totalTime = (ftPerMile / hoursPerDay * worldDiameter / daysPerYear);
		//calculations of how long it would take sam the snail to crawl around the world

		printf("It will take Sam %d years to crawl around the world \n", totalTime);
		//prints the result
		return 0;
	}