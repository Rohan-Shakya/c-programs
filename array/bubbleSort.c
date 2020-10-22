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
    for(i=0;i<9;i++){
        for(j=i+1;j>10;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Printing marks in ascending order
    printf("The sorted marks in Ascending orders are\n");
    for(i=0;i<10;i++){
        printf("%d\t\n",arr[i]);
    }
    // Printing Topper and loser marks
    printf("Topper Marks:%d\n",arr[9]);
    printf("Loser Marks:%d\n",arr[0]);
}