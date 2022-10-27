#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int square(int);
double Power(double, int);
int maximum(int, int, int);
enum Status { CONTINUE, WON, LOST };
int rollDice(void);
long factorial(long);

int main(void)
{
	//P12
	printf("-----P12-----\n\n");

	for (int i = 0; i <= 10; i++)
		printf("%d ", square(i));
	printf("\n");


	printf("\n\n");


	//P13
	printf("-----P13-----\n\n");
	int k;
	double Ans;
	printf("計算3.5的K次方?請輸入k=");
	scanf_s("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n",k,Ans);

	printf("\n\n");


	//P15
	printf("-----P15-----\n\n");
	int number1, number2, number3;
	printf("Enter three intergers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maximum is : %d\n", maximum(number1, number2, number3));


	printf("\n\n");


	//P16
	printf("-----P16-----\n\n");
	for (int i = 1; i <= 10; i++)
		printf("%.2f ", sqrt(i));
	printf("\n");


	printf("\n\n");


	//P18
	printf("-----P18-----\n\n");
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	strcpy_s(string2, string1);
	printf("string2=%s\n", string2);

	len=strlen(string2);
	printf("字串長度為=%d\n", len);


	printf("\n\n");


	//P20
	printf("-----P20-----\n\n");
	for (int i = 1; i <= 20; i++)
	{
		printf("%10d ", 1 + (rand() % 6));
		if (i % 5 == 0)
			printf("\n");
	}


	printf("\n\n");


	//P21
	printf("-----P21-----\n\n");
	unsigned int seed;

	printf("Enter seed:");
	scanf_s("%u" ,& seed);

	srand(seed);

	for (int i = 1; i <= 10; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
			printf("\n");
	}


	printf("\n\n");


	//P23
	printf("-----P23-----\n\n");
	int sum, myPoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;

		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
	}
	
	while (gameStatus == CONTINUE)
	{
		sum = rollDice();
		if(sum == myPoint)
			gameStatus = WON;
		else
			if (sum == 7)
				gameStatus = LOST;

		if (gameStatus == WON)
			printf("Player wins\n");
		else if(gameStatus == LOST)		//
			printf("Player loses\n");
	}


	printf("\n\n");


	//P27
	printf("-----P27-----\n\n");
	for (int i = 0; i <= 10; i++)
		printf("%2d! = %1d\n", i, factorial(i));


	printf("\n\n");


	system("pause");
	return 0;
}

int square(int y)
{
	return y * y;
}

double Power(double X,int n)
{
	double PowerXn = 1;
	for (int i = 0; i < n; i++)		//
		PowerXn = PowerXn * X;
	return PowerXn;
}

int maximum(int x,int y,int z)
{
	int max = x;

	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}

long factorial(long number)
{
	if (number <= 1)
		return 1;
	else
		return (number * factorial(number - 1));
}

int rollDice(void)
{
	int diel1, diel2;
	int workSum;

	diel1 = 1 + (rand() % 6);
	diel2 = 1 + (rand() % 6);
	workSum = diel1 + diel2;

	printf("Player rolled %d + %d = %d\n", diel1, diel2, workSum);
	return workSum;
}