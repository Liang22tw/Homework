#include <stdio.h>
#include <stdlib.h>

int main()
{
	//3.17
	printf("-----Question 3.17-----\n\n");

	int account_number = 0;
	float beginning_balance, total_charges, total_cradits, credit_limit;
	float New_balance;
	
	while (account_number != -1)
	{
		
		printf("Enter account number (-1 to end) :");
		scanf_s("%d", &account_number);
		if (account_number == -1)
			break;
		printf("Enter beginning balance :");
		scanf_s("%f", &beginning_balance);
		printf("Enter total charges :");
		scanf_s("%f", &total_charges);
		printf("Enter total cradits :");
		scanf_s("%f", &total_cradits);
		printf("Enter credit limit :");
		scanf_s("%f", &credit_limit);

		New_balance = beginning_balance + total_charges - credit_limit;

		printf("\nAcconut\t\t%d", account_number);
		printf("\nCredit limit\t%f", credit_limit);
		printf("\nBalance\t\t%f", New_balance);
		if (New_balance <= credit_limit)
			printf("\nCredit Limit Exceeded.\n");
		printf("\n\n");
	}
	printf("\n\n");
	



	//3.18
	printf("-----Question 3.18-----\n\n");
	float sales = 0, salary_Q318;
	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f",&sales);
		if (sales == -1)
			break;
		salary_Q318 = 200 + sales* 0.09;
		if (sales != -1)
			printf("Salary is : %.2f\n\n",salary_Q318);
	}
	printf("\n\n");
	

	//3.19
	printf("-----Question 3.19-----\n\n");
	int days;
	float loan_principal = 0,rate_Q319, interest;

	while(loan_principal != -1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &loan_principal);
		if (loan_principal == -1)
			break;
		printf("Enter the interest rate : ");
		scanf_s("%f", &rate_Q319);
		printf("Enter term of the loan in days : ");
		scanf_s("%d", &days);
		interest = loan_principal * rate_Q319 * days / 365;
		printf("The interest charge is : $%.2f  \n\n",interest);
	}
	printf("\n\n");
	
	
	

	//3.20
	int workhour_320 = 0;
	float rate_Q320,salary_Q320;

	printf("-----Question 3.20-----\n\n");
	while(workhour_320 !=- 1)
	{
		printf("Enter # of hours worked (-1 to end) : ");
		scanf_s("%d", &workhour_320);
		if (workhour_320 == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf_s("%f", &rate_Q320);
		salary_Q320 = workhour_320 * rate_Q320;

		if (workhour_320 > 40)
			salary_Q320 = (workhour_320 - 40) + rate_Q320 * 1.5 * workhour_320;
		printf("Salary is $%.2f\n\n", salary_Q320);
	}
	printf("\n\n");
	
	
	

	//3.33
	printf("-----Question 3.33-----\n\n");
	printf("++++++++++++\n");
	printf("+          +\n");
	printf("++++++++++++\n\n");




	//4.15
	printf("-----Question 4.15-----\n\n");
	float rate_415, value_415;
	rate_415 = 1.095;
	for (int i=0;i<5;i++)
	{
		value_415 = 5000;
		rate_415 = rate_415 + 0.005;
		for (int j = 0; j < 15; j++)
		{
			value_415 = value_415 * rate_415;
		}
		printf("rate : %.3f   -> $%.2f\n", rate_415, value_415);
	}
	printf("\n");



	printf("\n\n\n");

	//4.16
	printf("-----Question 4.16-----\n\n");

	printf("(A)\t\t(B)\t\t(C)\t\t(D)\n");
	for (int i=0; i < 11; i++)
	{
		for (int j = 0; j <= i; j++)		//A
			printf("*");

		i <= 6 ? printf("\t\t") : printf("\t");

		for (int j = 11; j > i; j--)		//B
			printf("*");

		i <= 3 ? printf("\t") : printf("\t\t");

		for (int j = 0; j <= i; j++)		//C
			printf(" ");
			
		for (int j = 11; j > i; j--)
			printf("*");
		
		printf("\t");
			
		for (int j = 10; j > i; j--)		//D
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");


		printf("\n");
	}
	
	printf("\n\n");
	
	//4.27
	int counter_1=0;

	printf("-----Question 4.27-----\n\n");
	printf("|side 1\tside 2\thypotenuse|\n");
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			for (int k = 1; k <= 500; k++)
			{
				if (i > j && i > k)
				{
					if (i * i == j * j + k * k && j > k)
					{
						printf("|%d\t%d\t%d|\t", k, j, i);
						counter_1++;
						if (counter_1 % 7 == 0)
							printf("\n");
					}
				}
				else
					break;
			}
		}
	}
	printf("\n\n");
	




	//4.28
	int staff_type=0,quantity_428=0,workdays_428=0;
	float salary_428=0,sales_428=0,salary_per_item=0,workhours_428,salary_per_hour=0;
	printf("-----Question 4.28-----\n\n");
	while (staff_type != -1)
	{
		printf("Enter staff type (-1 to end): ");
		scanf_s("%d",&staff_type);
	
		if (staff_type == 1)
		{
			printf("Enter his/her weekly salary : ");
			scanf_s("%f", &salary_428);
			printf("his/her salary : $%.2f", salary_428);
		}
		else if (staff_type == 2)
		{
			printf("Enter his/her work hours : ");
			scanf_s("%f", &workhours_428);
			printf("Enter his/her salary per hour: ");
			scanf_s("%f", &salary_per_hour);
			if (workhours_428 > 40)
				salary_428 = salary_per_hour * 40 + (workhours_428 - 40) * 2 * salary_per_hour / 2 * 1.5;
			else
				salary_428 = (workhours_428 *2) * salary_per_hour / 2;
			printf("his/her salary : $%.2f", salary_428);
		}
		else if (staff_type == 3)
		{
			printf("Enter his/her gross weekly sales : ");
			scanf_s("%f", &sales_428);
			salary_428 = 250 + 0.057 * sales_428;
			printf("his/her salary : $%.2f", salary_428);
		}
		else if (staff_type == 4)
		{
			printf("Enter his/her production quantity : ");
			scanf_s("%d", &quantity_428);
			printf("Enter his/her salary per item : ");
			scanf_s("%f", &salary_per_item);
			salary_428 = quantity_428 * salary_per_item;
			printf("his/her salary : $%.2f", salary_428);
		}
		else if (staff_type == -1)
			break;
		else
			printf("Error");

		printf("\n\n");
	}
	printf("\n\n");





	//4.31
	
	printf("-----Question 4.31-----\n\n");
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < abs(4 - i); j++)
			printf(" ");
		for (int j = 0; j < (9 - abs(4 - i) * 2); j++)
			printf("*");

		printf("\n");
	}
	printf("\n\n");
	
	system("pause");
	return 0;
}