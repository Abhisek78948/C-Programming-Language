#include<stdio.h>
int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
        printf("The given number is a positive number");
    }
    else if(num<0){
        printf("The given number is a negevive number");
    }
    else{
        printf("The given number is zero");
    }
    return 0;
}