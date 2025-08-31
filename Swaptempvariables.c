#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}