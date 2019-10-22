#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,remainder;
    printf("\nEnter first number :");
    scanf("%d",&n1);
     printf("\nEnter second number :");
    scanf("%d",&n2);
    n1=abs(n1);
    n2=abs(n2);
    while (remainder!=0)
    {
        remainder=n1%n2;
        n1=n2;
        n2=remainder;
    }
    printf("\nThe GCD is : %d",n1);


}
