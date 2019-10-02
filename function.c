#include<stdio.h>
#include<math.h>


double
serrian(int, int);
int main(void)
{
  int num1, num2;
  printf("Enter the 1st number: ");
  scanf("%d",&num1);
  printf("Enter the 2nd number: ");
  scanf("%d",&num2);
  printf("The number is %.0f\n",serrian(num1,num2));
}

double serrian( int x, int y)
{
  int packege = pow(x,y);
  return packege;
}
