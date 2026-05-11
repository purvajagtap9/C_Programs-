#include<stdio.h>
//declartaion (memory not allocated)
struct demo
{
  int i;  //4 
  char ch;  //1 generates padding 
  float f;  //4

};          //12
int main()
{
    struct demo dobj;
    printf("%d\n",sizeof(dobj)); //12

    return 0;
}

