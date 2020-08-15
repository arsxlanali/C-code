#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *getArray1D(int n)
{
    int *array = malloc(n);
    for (int i = 0; i < 16; ++i)
    {
        printf("Enter the value:");
        scanf("%d", &array[i]);
    }
    return array;
}

void convertArray2D(int n)
{
    int *p = NULL;
    
    p = getArray1D(n);
    int array2d[4][4];
    //free(p);
    int s=0;
    for(int i=0; i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            array2d[i][j] =  *(p+ s);
            printf("ARRAY2 %d  ",array2d[i][j]);
            s++;
        }
    }
}

int main ()
{
  	int n=16;
  	convertArray2D(n);
    return 0;
}
