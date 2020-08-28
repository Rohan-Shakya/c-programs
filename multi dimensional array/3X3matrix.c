// WAP to input data in two dimensional array for example 3X3 matrix and display in matrix form.
#include<stdio.h>
void main()
{
	int i, j, a[3][3];
	for(i = 0; i < 3; i++){
		for(j = 0; j<3; j++){
			printf("\nEnter the matrix elements:");
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nThe 3X3 matrix elements are: \n");
	for(i = 0; i< 3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	getch();
}
