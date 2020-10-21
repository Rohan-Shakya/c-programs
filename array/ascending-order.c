// WAP to input 'n' numbers and sort them in ascending order.
#include<stdio.h>

int main()
{
	int i,j, n, num[100], t;
	printf("\nEnter the size of array not more than 100:\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("enter array elements:\n");
		scanf("%d", &num[i]);
	}
	for(i = 0; i< n-1; i++){
		for(j= i+1; j <n; j++){
			if(num[i] > num[j]){
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}
		}
	}
	printf("\nNumbers in ascending order are:\n");
	for(i = 0; i < n; i++){
		printf("\n%d", num[i]);
	}
	return 0;
}
