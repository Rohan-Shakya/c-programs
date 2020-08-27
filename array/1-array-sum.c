// WAP to input 5 numbers with constant values initialization in array to display the sum
#include<stdio.h>
void main()
{
	int i, sum=0;
	int num[5]={5, 10, 15, 20, 25};
	printf("\n The 5 numbers in array is: \n");
	for(i = 0; i < 5; i++){
		printf("%d\n", num[i]);
		sum = sum + num[i];
	}
	printf("\nSum of 5 numbers is: %d", sum);
	getch();
}
