// WAP to check the given number is palindrome or not
#include<stdio.h>
void main()
{
	int n, temp, sum=0, d;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	temp=n;
	while(n!=0){
		d=n%10;
		sum = sum * 10 + d;
		n = n /10;
	}
	if(temp == sum){
		printf("\n The number is Palindrome");
	}
	else{
		printf("\nThe number is not Palindrome");
	}
	getch();
}
