// WAP to display following pattern using nested loop.
/* 
  12345
  2345
  345
  45
  5
*/

#include<stdio.h>
#include<conio.h>

int main() {
    int i,j;
    for(i=1; i <= 5; i++){
        for(j=i; j <= 5 ; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
