#include <stdio.h>
int main() {

    char name[50];
    printf("Enter your name : ");
    scanf("%s",&name);

    int Age;
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    int Marks;
    printf("Enter your Marks: ");
    scanf("%d", &Marks);

    printf("Your name is: %s\n", name);
    printf("Your age is : %d\n", Age);
    printf("Your marks is: %d\n", Marks);
    
    return 0;
}