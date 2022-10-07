#include <stdio.h>
#include <stdlib.h>

int main()
{

	printf("Enter account number (-1 to end) :");
	scanf("%f");







	//4.31

	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < abs(4 - i);j++)
			printf(" ");
		for (int j = 0;j < (9 - abs(4 - i) * 2);j++)
			printf("*");

		printf("\n");
	}

	system("pause");
	return 0;
}