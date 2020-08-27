// WAP to display the following Fibonacci series :
// 1 1 2 3 5 ...... to nth term
#include<stdio.h>
void main()
{
	int i, a=0, b=1, c=1, n;
	printf("\nEnter the number of terms to be displayed:\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("%d\t", c);
		c = a+b;
		a = b;
		b = c;
	}
	getch();
}
