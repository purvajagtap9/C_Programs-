#include<stdio.h>
struct hello
{
  float f;  //4
  int arr[3]; //12
               //16
}hobj;
       
int main()
{
  printf("Size of object is : %lu\n",sizeof(hobj));
  
  return 0;
}

