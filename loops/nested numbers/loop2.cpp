// WAP to display following pattern using nested loop.
/* 
   1
   12
   123
   1234
   12345
*/

#include<stdio.h>
#include<conio.h>


int main() {
    int i,j;
    for(i=1; i <= 5; i++){
        for(j=1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
