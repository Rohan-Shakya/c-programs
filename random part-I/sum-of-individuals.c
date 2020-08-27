// WAP to calculate and display sum of the digits present in the given number
#include<stdio.h>
void main()
{
	int n, r, sum=0;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	do
	{
		r = n % 10;
		sum = sum + r;
		n = n / 10;
	} while( n!=0);
	printf("\nSum of the digits = %d", sum);
	getch();
}
