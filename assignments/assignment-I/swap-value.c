// WAP to exchange the values of two numbers the user entered
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, temp;
	printf("Enter the value of a and b\n");
	scanf("%d%d", &a, &b);
	a = temp;
	b = a;
	temp = b;
	printf("The value of a and b after swap is a = %d and b = %d", a, b);
	getch();
}
