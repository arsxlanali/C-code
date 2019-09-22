#include<stdio.h>
int main(void)
{
    float velocity,distance, time,acceleration;
    printf("Enter the Velocity: ");
    scanf("%f",&velocity);
    printf("Enter the Distance: ");
    fflush(stdin);
    scanf("%f",&distance);
    time = 2*distance/ velocity;//The given equation of motion is v=a*t and s=1/2*a*t*t we substituted value of a and put it into the second equation
    acceleration = velocity/time;//Then substituted a form that equation
    printf("Time of flight is %.1f seconds \n",time);
    printf("Acceleration is %.1f km/hr*2",acceleration);
}
