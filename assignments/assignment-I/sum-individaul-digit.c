// WAP to find the sum of all digits when a user enter a 3 digit number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, m, a, b, s = 0;
	printf("Enter any 3 digit number:\n");
	scanf("%d", &n);
	m = n;
	a = n % 10;
	n = n / 10;
	b = n % 10;
	n = n / 10;
	s = a + b + n;
	printf("The sum of digit of %d id %d", m, s);
	getch();
}
