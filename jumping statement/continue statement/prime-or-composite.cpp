// WAP to find wheather the number entered by the user is prime or composite by using the concept of continue statement
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	for(i = 2; i< n; i++){
		if(n % i != 0){
			continue;
		}
		printf("Composite number!!");
		
	}
	printf("Prime number");
	return 0;
} 
