#include<stdio.h>

struct demo
{
   int i;  //4
   int *ptr; //8
};         //12
      
int main()
{
  struct demo dobj;
  printf("Size of object is : %lu\n",sizeof(dobj)); //either 8 or 16(padding mule 16)

  return 0;
}

