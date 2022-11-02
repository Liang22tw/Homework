#include<stdio.h>
#include<stdlib.h>

int GCD(int, int);
int LCM(int, int);
float power(float,int);
unsigned long long Fibonacci(unsigned int,unsigned int);
double Tower_of_Hanoi(int);

int main()
{
	//5.28
	printf("-----5.28-----\n");
	char letter='0';
	printf("Type a English letter : ");
	scanf_s("%c", &letter);
	if (letter >= 65 && letter <= 91)
		letter = letter + 32;
	else if (letter >= 97 && letter <= 123)
		letter = letter - 32;
	printf("result : %c", letter);

	
	printf("\n\n");

	
	//5.29
	int intergers[2],small;

	printf("-----5.29-----\n");
	printf("Enter first number : ");
	scanf_s("%d", &intergers[0]);
	printf("Enter second number : ");
	scanf_s("%d", &intergers[1]);

	printf("their LCM is :%d", LCM(intergers[0], intergers[1]));

	
	printf("\n\n");

	
	//5.34
	printf("-----5.34-----\n");
	int exponent;
	float base;
	printf("Enter the base : ");
	scanf_s("%f", &base);
	printf("Enter the exponent : ");
	scanf_s("%d", &exponent);

	printf("power(%.2f , %d)=%.2f",base,exponent,power(base, exponent));

	printf("\n\n");
	
	
	//5.35			//
	printf("-----5.35-----\n");
	int n_th=1;
	unsigned long long number[3] = {0,0,0};

	printf("%15d", 0);

	while (1)
	{
		number[0] = number[1];
		number[1] = number[2];
		number[2] = Fibonacci(number[0], number[1]);
		printf("%15llu", number[2]);
		n_th++;
		if (number[2] < number[1] || number[2] < number[0])
			break;
		else
		{
			if (n_th % 5 == 0)
				printf("\n");
		}
	}

	printf("\nMax layer : %d\n", n_th);
	

	printf("\n\n");


	//5.36
	printf("-----5.36-----\n");
	int layer;

	printf("層數\t\t所需次數\n");
	for (int i = 1; i < 65; i++)
		printf("%3d\t\t%20.0f\n",i,Tower_of_Hanoi(i));

	system("pause");
	return 0;
}

int GCD(int a, int b) {
	if (b) while ((a %= b) && (b %= a));
	return a + b;
}

int LCM(int a, int b) {
	return a * b / GCD(a, b);
}

float power(float X, int Y)
{
	if (Y > 1)
		return X * power(X, Y-1);
	else
		return X;
}

unsigned long long Fibonacci(unsigned int X,unsigned int Y)
{
	if (X == 0 && Y == 0)
		return 1;
	else
		return X + Y;
}

double Tower_of_Hanoi(int X)
{
	if (X > 1)
		return 1 + Tower_of_Hanoi(X - 1) * 2;
	else
		return 1;
}