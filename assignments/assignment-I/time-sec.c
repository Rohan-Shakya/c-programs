// WAP to find the equivalent minutes and seconds when the user enters time in seconds
#include<stdio.h>
#include<conio.h>
void main()
{
	int time, min, sec;
	printf("Enter time in seconds:\n");
	scanf("%d", &time);
	min = time / 60;
	sec = time % 60;
	printf("Equivalent min = %d and sec = %d", min, sec);
	getch();
}
