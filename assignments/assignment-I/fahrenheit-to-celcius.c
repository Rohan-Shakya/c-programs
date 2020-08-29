// WAP to enter Fahrenheit temperatur and display its equivalent Celcuis temperatur
#include<stdio.h>
#include<conio.h>
void main()
{
	float fah, cel;
	printf("\nEnter temperature in Fahrenheit:\n");
	scanf("%f", &fah);
	cel = (fah - 32) * (float)5/9;
	printf("Temperature in Celcuis id %f\n", cel);
	getch();
}
