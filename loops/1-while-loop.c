// WAP to calculate and display sum of the numbers from 1 to 10;
#include<stdio.h>
void main()
{
	int i = 1, sum = 0;
	while(i <= 10)
	{
		sum += i;
		i++;
	}
	printf("sum of numbers from 1 to 10 = %d", sum);
	getch();
}
