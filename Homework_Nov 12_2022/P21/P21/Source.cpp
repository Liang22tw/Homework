#include <stdio.h>
#include <stdlib.h>

void staticArraylnit(void);
void automaticArraylnit(void);

int main(void)
{
	printf("First call to each function: \n");
	staticArraylnit();
	automaticArraylnit();

	printf("\n\nSecond call to each function:\n");
	staticArraylnit();
	automaticArraylnit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArraylnit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArraylnit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ", i, array1[i]);

	printf("\nValues on exiting staticArraylnit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ", i, array1[i] += 5);
}

void automaticArraylnit(void)
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\nValues on entering automaticArraylnit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]);

	printf("\nValues on exiting automaticArraylnit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i] += 5);
}