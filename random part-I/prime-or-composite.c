// WAP to check whether the given number is prime or composite.
#include<stdio.h>
void main()
{
	int n, i;
	printf("\nEnter number to check prime:\n");
	scanf("%d", &n);
	for(i = 2; i <=n ; i++){
		if(n % i == 0)
		break;
	}
	if(i == n){
		printf("The given number is prime.");
	}
	else {
		printf("The given number is composite.");
	}
	getch();
}
