#include<stdio.h>
int main(){
    int a,b;

    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    int Addition=a+b;
    int Subtraction=a-b;
    int Multiplication=a*b;
    int Division=a/b;

    printf("The Addition of two number is :%d\n",Addition);
    printf("The Subtraction of two number is:%d\n",Subtraction);
    printf("The Multiplication of two number is : %d\n",Multiplication);
    printf("The Division of two number is :%d\n",Division);
    return 0;
}