#include<stdio.h>

int main(void)
{
    int num,cout,tsum,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    tsum =0;
    cout = 0;
    while (cout< num)
    {
        sum++;
        tsum = tsum + sum;
        //printf("%d",tsum);
        cout++;
    }
    int fsum = (num * (num + 1))/2;
    if (fsum==tsum )
    {
        printf("\nBoth are equal!");
    }
    else
    {
        printf("Both are not equal!");
    }
}
