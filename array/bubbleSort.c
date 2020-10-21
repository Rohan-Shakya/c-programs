// Program that accepts marks of 10 student in C programming , display in ascending order, also display topper and loser marks
#include <stdio.h>
int main(){
    int i, j, arr[10];
    int temp;
    // Taking user's input
    printf("Enter the Marks obtained by 10 students in BCA:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    // Arranging in ascending order
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+ 1];
                arr[j+1] = temp;
            }
        }
    }
    // Printing marks in ascending order
    printf("The sorted marks in Descending orders are\n");
    for(i=0;i<10;i++){
        printf("%d\t\n",arr[i]);
    }
    // Printing Topper and loser marks
    printf("Topper Marks:%d\n",arr[9]);
    printf("Loser Marks:%d\n",arr[0]);
}