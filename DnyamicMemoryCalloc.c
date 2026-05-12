#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size = 0;
    float *Marks = NULL;

    printf("Enter no. of elements : \n");
    scanf("%d",&size);

    //Dynamic Memory allocation
    Marks = (float *)calloc (size , sizeof(float));

    //float Marks[5];

    int i = 0;
    printf("Enter your no.:\n");

    //Iteration
    for(i =0;i<size;i++)
    {
        scanf("%f",&Marks[i]);
    }

    printf("Entered marks are: \n");
//        1    2     3
    for(i =0;i<size;i++)
    {
        scanf("%f",&Marks[i]);
    }

    printf("%f",&Marks[i]);

    free(Marks);

    return 0;


}
