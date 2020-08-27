// WAP to prompt the user to enter any integer from 1 - 7 and displays the corresponding day of the week
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("\nEnter any number from 1 - 7 o display days\n");
	scanf("%d", &a);
	switch(a){
		case 1: 
		 	printf("Sunday");
		 	break;
		case 2: 
		 	printf("Monday");
		 	break;
		case 3: 
		 	printf("Tuesday");
		 	break;
		case 4: 
		 	printf("Wednesday");
		 	break;
		case 5: 
		 	printf("Thursday");
		 	break;
		case 6: 
		 	printf("Friday");
		 	break;
		case 7: 
		 	printf("Saturday");
		 	break;
		default:
			printf("Sorry:( \n Only from 1 to 7");
			break;
	}
	getch();
}
