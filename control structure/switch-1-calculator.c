// WAP which reads any two integer values from user and calculates sum, differenc and product using switch statement
#include<stdio.h>
void main()
{
	int a, b, c, ch;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("1. Sum\n");
	printf("2. Difference\n");
	printf("3. Product\n");
	printf("Enter your choice (1-3)\n");
	scanf("%d", &ch);
	switch(ch){
		case 1:
			c = a + b;
			printf("Sum of two numbers = %d\n", c);
			break;
		case 2:
			c = a - b;
			printf("Difference of two numbers = %d\n", c);	
			break;
		case 3: 
			c = a * b;
			printf("Product of two numbers = %d\n", c);
			break;
		default:
			printf("Wrong Choice !!! Please enter from 1 / 2 / 3 only.");
			break;
	}
	getch();
}
