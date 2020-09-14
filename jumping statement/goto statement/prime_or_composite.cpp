// WAP to find whether the number entered by the  user is prime or composite by using the concept of goto statement
#include<stdio.h>

int main(){
	int i,n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	for(i=2; i<n; i++){
		if(n % i == 0){
			printf("Composite number!!");
			goto skip;
		}
	}
	printf("Prime Number!!");
	skip:
	return 0;
}
