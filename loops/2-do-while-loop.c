// WAP to display multiplication table of 6
#include<stdio.h>
void main()
{
	int i = 1, p;
	do
	{
		p = 6 * i;
		printf("\n6 * %d = %d", i, p);
		i++;
	}while(i <= 10);
	getch();
}
