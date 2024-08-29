#include <stdio.h>
#define MIN 1
#define MAX 30
FILE *fp;
int main()
{
	int i;
	fopen_s(&fp, "csis.txt", "w");

	printf("%10s %10s %10s %10s %10s\n", "Value", "Square", "Cube", "Forth", "Fifth");
	fprintf(fp, "%10s %10s %10s %10s %10s\n", "Value", "Square", "Cube", "Forth", "Fifth");
	printf("%10s %10s %10s %10s %10s\n", "-----", "------", "----", "-----", "-----");
	fprintf(fp, "%10s %10s %10s %10s %10s\n", "-----", "------", "----", "-----", "-----");

	for (i = MIN; i <= MAX; ++i) {
		printf("%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i* i * i, i * i * i * i * i);
		fprintf(fp, "%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
	}
	fclose(fp);
	return 0;
}