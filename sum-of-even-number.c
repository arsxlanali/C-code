#include<stdio.h>
#include<math.h>

int main(void)
{
    int num1, num2;
    printf("Enter the Numbers: ");

    scanf("%d %d", &num1,&num2);
    if (num1%2!=0 && num2%2!=0)
    {
        num1++;
        num2++;
    }
    printf("[");
    int sum = 0;
    while (num1<=num2)
    {
        sum = sum + num1;
        printf("%d",num1);
        if (num1!= num2)
        {
            printf(" + ");
        }
            num1 = num1 + 2;
    }
    printf("] the sum is %d",sum);
}
