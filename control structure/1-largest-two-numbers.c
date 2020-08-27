// WAP which reads any two numbers and displays the largest one.
#include<stdio.h>
void main()
{
	int a, b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	if(a > b){
		printf("\n%d is larger than %d", a, b);
	}
	else {
		printf("\n%d is larger than %d", b, a);
	}
	getch();
}
