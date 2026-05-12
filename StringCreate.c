#include<stdio.h>
int main()
{
    char Arr[6] = {'H','E','L','L','O','\0'};
    char Brr[] = {'H','E','L','L','O','\0'};
    char Crr[6] = "Hello";   //mostly used

    printf("%s\n",Arr);  //%s - string format specifier
    printf("%s\n",Brr);
    printf("%s\n",Crr);

    return 0;
}