// WAP to print 1 2 3 using break statement
#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	for(i = 1; i<= 5; i++){
		if(i == 4){
			break;
		}
		printf("%d\t", i);
	}
	return 0;
}
