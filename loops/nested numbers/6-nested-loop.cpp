// WAP to display the multiplication table of nth terms
// 1 2 3 ...... N
// 2 4 6 .....2N
// 3 6 9 .... 3N
// . . .      .
// . . .      .
// N 2N 3N ...NN

#include<stdio.h>
int main()
{
	int i, j , n;
	printf("\nEnter the number of term:\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%5d", i*j);
		}
		printf("\n");
	}
	return 0;
}
