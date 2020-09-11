#include<stdio.h>
#include<conio.h>

void main(){

    // varibale decleration for selling price (SP) and cost price (CP)
    float CP, SP , loss , profit;

    // taking input from user
    printf("Enter the cost and selling price");
    scanf("%f%f",&CP,&SP);

    // if statement will check whether the CP or SP is greater
    // and then conditions will be applied accordingly

    if(CP > SP){
        loss = CP - SP;
        printf("The loss is %f", loss);
    }
    else{
        profit = SP - CP;
        printf("The profit is %f", profit);
    }
}