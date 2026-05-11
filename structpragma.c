#include<stdio.h>
#pragma pack(1) //to avoid padding

//declartaion (memory not allocated)
struct demo
{
  int i;  //4 
  char ch;  //1  
  float f;  //4

};          //9
int main()
{
    struct demo dobj;
    printf("%d\n",sizeof(dobj));

    return 0;
}

