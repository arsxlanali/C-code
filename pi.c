#include<stdio.h>

int main(void)
{
    int n;
    float n1=1.0,n2,n3,n4,pi1,pi2,pi,pif=0.0;
    //get the number for precsion of pi
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0)
    {
        //num1 is 1 and incrementing the number by 2
        n2 = n1+2.0;
        n3 = n2+2.0;
        n4 = n3+2.0;
        pi1 = 4.0/n1-4.0/n2;
        pi2 = 4.0/n3-4.0/n4;
        pi = pi1+pi2;
        //running sum pattern of pi to get final value
        pif = pif + pi;
        n1 = n4+2.0;
        n--;
    }
    printf("The value of pi is %f: ",pif);

}
