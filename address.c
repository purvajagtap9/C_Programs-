#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("L variables of all variables\n"); //L-Location R-Residents
    
    printf("%u\n",&ch); //100-101
    printf("%u\n",&i); //200-204
    printf("%u\n",&f); //300-304
    printf("%u\n",&d); //400-408

    return 0;
}
