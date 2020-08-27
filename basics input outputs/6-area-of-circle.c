// WAP to calculate area of a circle
#include<stdio.h>
void main()
{
	float r, a;
	printf("Enter radius\n");
	scanf("%f", &r);
	a = 3.14 * r * r;
	printf("area = %.2f", a); //upto two digits
	getch();
}
