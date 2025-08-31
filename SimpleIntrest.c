#include<stdio.h>
int main(){
    int P,R,T;

    printf("Enter the principal amount: ");
    scanf("%d",&P);

    printf("Enter the Rate of Intrest: ");
    scanf("%d",&R);

    printf("Enter the Time: ");
    scanf("%d",&T);

    int SI= (P*R*T)/100;
    
    printf("The Simple Intrest is : %d\n",SI);
    return 0;
}