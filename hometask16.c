#include<stdio.h>

int main(void)
{
    int array[3][3],array1[3][3],sumarray[3][3],i,j;
    int sum=0;
    printf("Matrix-1:\n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            fflush(stdout);
            scanf("%d", &array[i][j]);

            if (j==3)
            {
                printf("|");
                printf("\n");
            }
        }

    }
    printf("Marix-2:\n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            fflush(stdout);
            scanf("%d", &array1[i][j]);
            if (j==3)
            {
                printf("\n");
            }
        }
    }
    printf("The sum of entered matrices: \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            fflush(stdout);
            sumarray[i][j]= array[i][j]+array1[i][j];
            printf("%d  ",sumarray[i][j]);
        }
        printf("\n");
    }
}
