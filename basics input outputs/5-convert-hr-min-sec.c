// WAP to input seconds and convert it into hour , minutes, and seconds
#include<stdio.h>
void main()
{
	int s, h, r, d, m, a;
	printf("Enter seconds");
	scanf("%d", &s);
	h=s/3600; //for hour
	r= s%3600;
	m = r/60;  // for minutes
	d = r%60; // for seconds
	printf("hour = %d, minutes - %d, seconds = %d", h, m, d);
	getch();
}
