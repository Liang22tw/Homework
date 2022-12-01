#include <stdio.h>
#include <stdlib.h>

void stringReverse(int times);
char A[30];

int main()
{
	int counter = 0;
	printf("Enter a string: ");
	scanf("%s", A);

	for (int i = 0; A[i] != '\0'; i++)
		if(i>0)
			counter++;

	stringReverse(counter);		//

	for (int i = 0; A[i] != '\0'; i++)
		printf("%c", A[i]);

	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(int times)
{
	char _register;

	if (times != 0)
	{
		for (int i = 0; i < times; i++)
		{
			_register = A[i];
			A[i] = A[i + 1];
			A[i + 1] = _register;
		}
		stringReverse(times - 1);
	}
}