#include<stdio.h>

int main(void)
{
    int array5 [5] = {4,67,6,7,83};
    int array2 [5];
    int x = 0,i;
    for ( i =4 ; i>=0; i--)
    {
        array2[x] = array5[i];
        printf("%d\n",array2[x]);
        x++;

    }
}
