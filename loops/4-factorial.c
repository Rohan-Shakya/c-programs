// WAP to calculate and display factorial of 5
#include<stdio.h>
main()
{
	int i, n, fact=1;
	printf("Enter a number for factorial:\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		fact = fact * i;	
	}
	printf("Factorial of %d is = %d", n, fact);
	getch();
}
