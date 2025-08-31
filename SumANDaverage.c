#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Enter 3rd number: ");
    scanf("%d",&c);

    int sum=a+b+c;
    int average=(a+b+c)/3;

    printf("The sum of three numbers is :%d\n",sum);
    printf("The average of three number is:%d\n",average);
    return 0;
}