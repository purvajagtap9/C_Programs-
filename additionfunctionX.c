#include<stdio.h>

int addition(int no1, int no2)
{
    int Ans=0;
    Ans=no1 + no2;
    return Ans;

}
int main()
{  
    int Ret=0,A=11,B=10;

    Ret = addition(A,B);
    printf("Addition is %d\n", Ret);
    
    return 0;
}