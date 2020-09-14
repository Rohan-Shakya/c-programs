// WAP to display numbers from 1 to 10 using goto statement
#include<stdio.h>
int main(){
	int i = 1;
	label: 1; 
	printf("%d\n", i);
	i++;
	if(i <= 10){
		goto label;
	}
	return 0;
}
