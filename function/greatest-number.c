// WAP  to print the greatest number between two numbers using function
#include<stdio.h>
int great(int, int);
void main()
{
	int a, b, c;
	printf("\nEnter two numbers:\n");
	scanf("%d%d", &a, &b);
	c = great(a, b);
	printf("\nGreatest number = %d", c);
}
int great(int a, int b){
	if(a > b){
		return (a);
	}
	else {
		return (b);
	}
}
