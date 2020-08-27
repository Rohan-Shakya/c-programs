// WAP that reads marks of five subjects and calculates total marks & percentage. Also awards the division on the basis of following criteria.
// PERCENTAGE ===> DIVISION
// p > =75   ===> Distinction
// p >= 60 and < 75  ===> FIRST DISTINCTION
// p >= 45 and <60 ===> Second  Divistion
// p >= 35 and < 45 ===> Third Division
// Otherwise ===> FAILED

#include<stdio.h>
void main()
{
	int eng, nep, comp, sci, maths, total;
	float per;
	printf("\n Enter marks of English:\n");
	scanf("%d", &eng);
	printf("Enter marks of Nepali:\n");
	scanf("%d", &nep);
	printf("Enter marks of Computer Science:\n");
	scanf("%d", &comp);
	printf("Enter marks of Science:\n");
	scanf("%d", &sci);
	printf("Enter marks of Maths:\n");
	scanf("%d", &maths);
	total = eng + nep + comp + sci + maths;
	per = (float)total/5;
	printf("Total Obtained Marks = %d \n Percentage = %f \n", total, per);
	if(eng >= 35 && nep >= 35 && comp >= 35 && sci >= 35 && maths >= 35){
		if(per >= 75){
			printf("Distinction");
		}
		else if(per >= 60){
			printf("First Division");
		}
		else if(per >= 45){
			printf("second Division");
		}
		else{
			printf("Third Divistion");
		}
	}
	else {
		printf("You are failed. Sorry :(");
	}
	getch();
} 
