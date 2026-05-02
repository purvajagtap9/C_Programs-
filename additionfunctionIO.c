#include<stdio.h>

int addition(int no1, int no2)
{
    int Ans=0;
    Ans=no1 + no2;
    return Ans;

}
int main()
{  
    int Ret=0,A=0,B=0;
    
    printf("Enter first number : \n");
    scanf("%d",&A);

    printf("Enter second number : \n");
    scanf("%d",&B);

    Ret = addition(A,B);
    printf("Addition is %d\n", Ret);
    
    return 0;
}