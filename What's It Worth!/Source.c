//header files and constants
#include <stdio.h>
FILE* fp;

const double dodgeRate = 302;
const double plymouthRate = 291;
const double mustangRate = 201;
const double pontiacRate = 251;
const double novaRate = 335;

int main()
{
	//opening the text file
	fopen_s(&fp, "csis.txt", "w");
	
	//defining variables needed for calculations
	int initialDodge = 44200;
	int initialPlymouth = 7400;
	int initialMustang = 55000;
	int initialPontiac = 29000;
	int initialNova = 2500;
	double finalDodge;
	double finalPlymouth;
	double finalMustang;
	double finalPontiac;
	double finalNova;

	//calculations
	finalDodge = initialDodge * (dodgeRate / 100 + 1);
	finalPlymouth = initialPlymouth * (plymouthRate / 100 + 1);
	finalMustang = initialMustang * (mustangRate / 100 + 1);
	finalPontiac = initialPontiac * (pontiacRate / 100 + 1);
	finalNova = initialNova * (novaRate / 100 + 1);
	
	//Print Results
	printf("Car            2004 Value     2008 Value\n");
	printf("  ---------------------------------------\n");
	fprintf(fp, "Car            2004 Value     2008 Value\n");
	fprintf(fp, "  ---------------------------------------\n");
	printf("Nova          :     %d.00    :   %.2lf\n", initialNova, finalNova);
	printf("Challenger    :    %d.00    :  %.2lf\n", initialDodge, finalDodge);
	printf("Cuda          :     %d.00    :   %.2lf\n", initialPlymouth, finalPlymouth);
	printf("Mustang       :    %d.00    :  %.2lf\n", initialMustang, finalMustang);
	printf("GTO           :    %d.00    :  %.2lf\n", initialPontiac, finalPontiac);
	fprintf(fp, "Nova          :     %d.00    :   %.2lf\n", initialNova, finalNova);
	fprintf(fp, "Challenger    :    %d.00    :  %.2lf\n", initialDodge, finalDodge);
	fprintf(fp, "Cuda          :     %d.00    :   %.2lf\n", initialPlymouth, finalPlymouth);
	fprintf(fp, "Mustang       :    %d.00    :  %.2lf\n", initialMustang, finalMustang);
	fprintf(fp, "GTO           :    %d.00    :  %.2lf\n", initialPontiac, finalPontiac);

	return 0;
}