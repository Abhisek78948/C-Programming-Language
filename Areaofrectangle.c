#include<stdio.h>
int main(){
    int length,breadth;

    printf("Enter the length: ");
    scanf("%d",&length);

    printf("Enter the breadth: ");
    scanf("%d",&breadth);

    int Area=length*breadth;

    printf("The area of rectangle is :%d\n",Area);
    return 0;
}