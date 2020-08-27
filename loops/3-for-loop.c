// WAP to calculate and display the value of y raised to power x (z = y^x)
#include<stdio.h>
void main()
{
	int i, x, y, z = 1;
	printf("\nEnter the value for x and y:\n");
	scanf("%d%d", &x, &y);
	for(i = 1; i <= x; i++){
		z = z * y;
	}
	printf("%d raise to power %d = %d", y, x, z);
	getch();
}
