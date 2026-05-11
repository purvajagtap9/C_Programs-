#include<stdio.h>
//declartaion (memory not allocated)
struct demo
{
  int i;  //4
  float f;  //4

};          //8
int main()
{
    struct demo dobj;
    printf("%d\n",sizeof(dobj)); //8

    return 0;
}

