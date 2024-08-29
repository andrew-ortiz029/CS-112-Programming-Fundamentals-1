/*Andrew Ortiz
  Here comes the Fudge
  A program that utilizes mod to show the most effecient way to ship fudge to customers
*/

//header files, constants, and open text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* fp;

const int fivefiveGallon = 55;
const int twentyGallon = 20;
const int tenGallon = 10;
const int fiveGallon = 5;
const int oneGallon = 1;

int main()
{
	fopen_s(&fp, "csis.txt", "w");
	//declare gallons variable
	int gallons = 0;
	
	//user input to give gallons a value
	printf("Gallons of fudge ordered: ");
	scanf_s("%d", &gallons);
	fprintf(fp, "Gallons of fudge ordered: ");
	
	//calculations and print results
	printf("The number of 55 gallon drums is: %d\n", gallons / fivefiveGallon);
	fprintf(fp, "The number of 55 gallon drums is: %d\n", gallons / fivefiveGallon);
	gallons = gallons % fivefiveGallon;
	printf("The number of 20 gallon drums is: %d\n", gallons / twentyGallon);
	fprintf(fp, "The number of 20 gallon drums is: %d\n", gallons / twentyGallon);
	gallons = gallons % twentyGallon;
	printf("The number of 10 gallon drums is: %d\n", gallons / tenGallon);
	fprintf(fp, "The number of 10 gallon drums is: %d\n", gallons / tenGallon);
	gallons = gallons % tenGallon;
	printf("The number of 5 gallon drums is: %d\n", gallons / fiveGallon);
	fprintf(fp, "The number of 5 gallon drums is: %d\n", gallons / fiveGallon);
	gallons = gallons % fiveGallon;
	printf("The number of 1 gallon drums is: %d\n", gallons / oneGallon);
	fprintf(fp, "The number of 1 gallon drums is: %d\n", gallons / oneGallon);
	gallons = gallons % oneGallon;
	
	//return 0
	return 0;
}


