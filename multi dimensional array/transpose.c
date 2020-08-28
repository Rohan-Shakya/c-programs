// WAP to input 2X3 matrix and display in transpose form that is in 3X2 matrix
#include<stdio.h>
void main()
{
	int i, j, a[2][3];
	for(i = 0; i<2; i++){
		for(j=0; j < 3; j++){
			printf("\nENter the matrix elements:\n");
			scanf("%d", &a[i][j]);
		}
		
	}
	printf("\nThe matrix elements after transpose are:\n");
	for(i = 0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%d\t", a[j][i]);
		}
	 	printf("\n");
	}
	getch();
}
