#include<stdio.h>
#include<conio.h>

/* 
   1
   12
   123
   1234
   12345
*/

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