// WAP to find the simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
	float p, t, r, si;
	printf("\nEnter Principle:\n");
	scanf("%f", &p);
	printf("\nEnter Rate:\n");
	scanf("%f", &r);
	printf("\nEnter Time:\n");
	scanf("%f", &t);
	si = (p * t * r) / 100;
	printf("Simple Interest is %f\n", si);
	getch();
}
