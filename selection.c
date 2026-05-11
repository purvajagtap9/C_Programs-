#include<stdio.h>
int main()
{
    int i;
    
    printf("Enter any number:\n");
    scanf("%d",&i);

    if(i%2==0)
    {
        printf("The number is EVEN");
    }
    else
    {
        printf("The numbers id ODD");
    }

    return 0;
}