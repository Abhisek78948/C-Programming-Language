#include<stdio.h>
int main(){
    int n;
    int result=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        result +=i;
    }
    printf("Sum is :%d",result);
    return 0;
}