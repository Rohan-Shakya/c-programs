// WAP to print 1 2 3 5 using continue statement
#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	for(i = 1; i<= 5; i++){
		if(i == 4){
			continue;
		}
		printf("%d\t", i);
	}
	return 0;
}
