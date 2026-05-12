#include<stdio.h>
int main()
{
    char str[]="Ganesh";
    char *ptr = NULL;

    ptr=str;  //ptr poiting 100=G  uses sequence
    printf("%c\n",*ptr);
    ptr++;       //101

    printf("%c\n",*ptr);  //a
    ptr++;       //102

    printf("%c\n",*ptr);  //n
    ptr++;       //103



    return 0;
}
