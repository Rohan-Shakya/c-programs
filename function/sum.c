#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter two numbers a and b for sum\n");
    scanf("%d%d",&a,&b);

    // calling funciton adder
    c = adder(a,b);

    printf("Sum is %d",c);

    return 0;
}


int adder(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}