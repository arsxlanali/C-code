#include<stdio.h>

int main(void)
{
    float num,profit;
    printf("Enter the Years: ");
    scanf("%f",&num);
    float amount = 1000;
    int count = 0;
    printf("Year        Amount on Deposit\n");
    while (count<num)
    {
        profit = amount*0.05;
        amount = profit + amount;
        count++;
        printf("%d        %.2f\n",count,amount);
    }
}
