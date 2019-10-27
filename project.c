#include<stdio.h>
#include<math.h>

int main(void)
{
    int p,i,n,payment;
    printf("Enter the car purchase price: ");
    scanf("%d",&p);
    printf("Enter the monthly interest rate: ");
    scanf("%d",&i);
    printf("Enter the number of payments: ");
    scanf("%d",&n);
    int denomenetor = i+1;
    denomenetor = pow(denomenetor, -1);
    denomenetor = 1-denomenetor;
    payment = (i*p)/denomenetor;
    printf("The payment is %d", payment);
}
