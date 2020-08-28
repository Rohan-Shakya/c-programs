// WAP to input 'n' numbers and search the number whether it is in the list or not.
#include<stdio.h>
void main()
{
	int i, n, num[100], x;
	printf("\nEnter the size of array not more than 100:\n");
	scanf("%d", &n);
	for(i= 0; i < n; i++){
		printf("Enter array elements:\n");
		scanf("%d", num[i]);
	}
	printf("Enter a number to be search:\n");
	scanf("%d", &x);
	for(i =0; i<n; i++){
		if(x == num[i]){
			printf("The number is in the list.");
			break;
		}
		if(x == i){
			printf("the number is not in the list.");
		}
	}
	getch();
}
