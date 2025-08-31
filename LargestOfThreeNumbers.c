#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 1st number:");
    scanf("%d",&num1);

    printf("Enter 2nd number:");
    scanf("%d",&num2);

    printf("Enter 3rd number:");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("The %d is the largest number among %d and %d",num1 ,num2,num3);
    }
    else if(num2>num1 && num2>num3){
        printf("The %d is the largest number among %d and %d",num2,num1,num3);
    }
    else{
        printf("The %d is the largest number among %d and %d",num3,num2,num1);
    }
    return 0;
}