#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice_1, dice_2;
int result[11];
void printresult();

void main()
{
	int counter = 0;

	srand(time(NULL));

	while (counter != 36000)
	{
		counter++;
		dice_1 = rand() % 6 + 1;
		dice_2 = rand() % 6 + 1;

		result[dice_1 + dice_2 - 2]++;
	}
	printresult();

	printf("\n\n");
	system("pause");
}

void printresult()
{
	printf("\n\t點數");
	for (int i = 2; i <= 12; i++)
		printf("%7d", i);
	printf("\n");

	printf("\t次數");
	for (int i = 0; i < 11; i++)
		printf("%7d", result[i]);
}