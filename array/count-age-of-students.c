<<<<<<< HEAD
// WAP to input the age of 2 students and count the number of students having age between 20 to 25.
#include<stdio.h>
void main()
{
	int i , age[10], c = 0;
	for(i = 0; i < 20; i++){
		printf("Enter age of students:");
		scanf("%d", age[i]);
	}
	for(i = 0; i < 20; i++){
		if(age[i] >= 20 && age[i]<= 25){
			c++;
		}
	}
	printf("total number of studnet having age bwtweon 20 -25 is: %d", c);
	getch();
}
=======
// WAP to input the age of 20 students and count the number of students having age between 20 to 25.
#include<stdio.h>
void main()
{
	int i , age[20], c = 0;
	for(i = 0; i < 20; i++){
		printf("Enter age of students:");
		scanf("%d", age[i]);
	}
	for(i = 0; i < 20; i++){
		if(age[i] >= 20 && age[i]<= 25){
			c++;
		}
	}
	printf("total number of studnet having age bwtweon 20 -25 is: %d", c);
	getch();
}
>>>>>>> e3a297402d71179ab88cebfd5aaf5d6215360042
