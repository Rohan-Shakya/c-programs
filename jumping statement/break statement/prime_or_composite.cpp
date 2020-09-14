// WAP to find whether the number entered by the user is prime or composite by using the concept of break statement.
#include<stdio.h>
#include<conio.h>
int main(){
	int i, n;
	printf("Enter a number\n");
	scanf("%d", &n);
	for(i = 2; i< n; i++){
		if(n % i == 0){
			break;
		}
	}
	if(n ==i){
		printf("prime number!");
	}
	else {
		printf("Composite nubmer!");
	}
	return 0;
}
