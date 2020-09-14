// WAP to display following pattern using nested loop.
/* 
    54321
    4321
    321
    21
    1
*/

#include<stdio.h>
#include<conio.h>



int main() {
    int i,j;
    for(i=5; i >= 1; i--){
        for(j=i; j >= 1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
