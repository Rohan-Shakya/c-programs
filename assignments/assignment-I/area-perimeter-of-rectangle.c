// WAP to find the area and perimeter of the rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
	float length, breadth, area, perimeter;
	printf("Enter length and breadth:\n");
	scanf("%f%f", &length, &breadth);
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	printf("Area of rectangle is %f and perimeter is %f", area, perimeter);
	getch();
}
