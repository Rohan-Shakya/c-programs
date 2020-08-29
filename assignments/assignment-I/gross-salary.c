// WAP to calculate Ram's gross salary is entered through keyboard. His dearness allowance is 40% of basic salary and house rent allowance is 20% of the basic salary.
#include<stdio.h>
#include<conio.h>
void main()
{
	float salary, grossSalary, totalAllowance;
	printf("\nEnter Salary\n");
	scanf("%f", &salary);
	totalAllowance = ((float)40/100 * salary) + ((float)20/100 * salary);
	grossSalary = salary + totalAllowance;
	printf("The gross Salary is %f", grossSalary);
	getch();
}
