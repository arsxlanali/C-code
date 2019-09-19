#include<stdio.h>
#include<math.h>
int main(void)
{
    char inp='f';
    char val='y';
    int cal=0, fer=0;
    while (val=='y' || val=='Y') /*This loop will check the input of prompt entered below*/
    {
        printf("Enter 'F' for Fahrenheit or 'C' for Celsius: ");
        fflush(stdin);//flash the input form user before the execution "note": This will work better in 2nd repetion of loop
        scanf("%c",&inp);
        if (inp=='F' || inp=='f')
        {
            printf("Enter the Temperature in Celsius: ");
            fflush(stdin);
            scanf("%d",&cal);
            fer = 32 + (cal*9.0/5.0);
            printf("Fahrenheit Temperature: %d",fer);
        }
        if (inp=='C' || inp=='c')
        {
            printf("Enter Temperature in Fahrenheit: ");
            fflush(stdin);
            scanf("%d",&fer);
            cal = (fer-32)*5.0/9.0;
            printf("Celsius Temperature: %d\n",cal);
        }
        if (inp!='F' && inp!='f' && inp!='C' && inp!='c')//Deal with exception of input
        {
            printf("Please Enter only 'F' or 'C' character!\n");
        }
        fflush(stdin);
        printf("\nDo you want to rerun your program enter 'Y' for yes 'N' for no: ");
        scanf("%c",&val);//Decode Whether you want to rerun your program
    }

}
