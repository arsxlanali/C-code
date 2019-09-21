#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("Enter the x: ");
    fflush(stdin);
    scanf("%d",&x);
    printf("Enter the y: ");
    fflush(stdin);
    scanf("%d",&y);
    printf("Enter the z: ");
    fflush(stdin);
    scanf("%d",&z);
    if (x>=0 && y >=0 && z>=0)
    {
        printf("%d %d %d all are positive numbers",z,y,z);
    }
    else if (x>=0 && y>=0 && z!=0)
    {
        printf("%d %d are positive and %d is negative number",x,y,z);
    }
    else if (x>=0 && z>=0 && y!=0)
    {
        printf("%d %d are positive and %d is negative",x,z,y);
    }
    else if (y>=0 && z>=0 && x!=0)
    {
        printf("%d %d are positive numbers and %d is negative",y,z,x);
    }
    else
    {
        printf("%d %d %d all are negative numbers",x,y,z);
    }

}
