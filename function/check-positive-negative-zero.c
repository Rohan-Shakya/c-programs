// WAP to check whether the entered number is positive, negative, or zero using function
#include<stdio.h>
void posit(int);
void main()
{
	int n;
	printf("\nEnter a number");
	scanf("%d", &n);
	posit(n);
}
void posit(int n)
{
	if(n > 0){
		printf("\n%d is positive number", n);
		
	}
	else if(n<0){
		printf("\n%d is negative number", n);
		
	}
	else{
		printf("\n%d is zero", n);
	}
}
