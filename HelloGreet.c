#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to the program.", name);
    return 0;
}