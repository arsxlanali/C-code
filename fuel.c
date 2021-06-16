#include <stdio.h>

int main()
{
    int fuel=0, quantity=0;
    printf("Enter the fuel type: ");
    scanf("%d", &fuel);
    if (fuel <=3)
    {
        int totalbill=0;
        printf("Enter the Quantity: ");
        scanf("%d",&quantity);
        if (fuel==1 && quantity>100)
        {
            totalbill = quantity*110;
            totalbill = totalbill-(totalbill*0.1);
        }
        else if(fuel==2 && quantity>100)
        {
            totalbill = quantity*130;
            totalbill = totalbill-(totalbill*0.05);            
        }
        else if(fuel==1 || fuel==2)
        {
            if (fuel=1)
            {
                totalbill = quantity*130;
            }
            else
            {
                totalbill = quantity*130;
            }
            totalbill = totalbill-(totalbill*0.02); 
        }
        else
        {
            totalbill = quantity*150;
        }
        printf("Total Bill = %d",totalbill);
        
    }
    else
    {
        printf("Invalid fuel type");
    }

    return 0;
}
