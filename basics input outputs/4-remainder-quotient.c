// WAP to input two numbers and print remainder and quotient
#include<stdio.h>
void main()
{
	int a, b, c, d;   // second number divides a first number
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	c = a/b;
	d = a%b;
	printf("quotient = %d", c);
	printf("Remainder = %d", d);
	getch();
}
