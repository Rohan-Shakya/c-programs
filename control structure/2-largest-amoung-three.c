// WAP to find the largest number among three numbers given by the user.
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\n Enter any three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a > b && a > c){
		printf("%d is the largest number.", a);
	}
	else if(b > c){
		printf("%d is the largest number.", b);
	}
	else {
		printf("%d is the largest number.", c);
	}
	getch();
}
