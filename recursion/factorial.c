// WAP to calculate factorial using recursion fucntion
#include<stdio.h>
int fact(int);
void main()
{
	int n, f;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	f = fact(n);
	printf("\nfactorial of %d is %d", n, f);
}
int fact(int n)
{
	if(n <=1)
	{
		return(1);
	}
	else{
		return(n*fact(n-1));
	}
}
