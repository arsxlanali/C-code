// This program is for plindrome of a and b
// s -> aSbb
// s -> e


#include <stdio.h>
#include <string.h>
int main()
{
    char string[20] = "aab";
    printf("%s\n", string);
    int flagA = 0;
    int flagB = 0;
    int threeMul = 0;
    if (string[0]=='a' && string[1]=='b' && string[2]=='b')
    {
        flagA = 1;
        flagB = 1;
    }
    for (int i=0, j = strlen(string)-1; i< (strlen(string)/2)-1; i++, j = j -2)
    {
        //printf("%d\n", i);
        if(strlen(string)%3!=0)
        {
            threeMul = 1;
            break;
        }
            //printf("fdkf\n");
            if (string[i] == 'a' && string[j-1]=='b' && string[j] == 'b')
            {
                flagA = 1;
                flagB = 1;
            }
            else
            {
                flagA = -1;
                flagB = -1;
            }
    }

    //printf("%d %d", flagA, flagB);

    if (threeMul==1)
    {
        printf("The string is not mulitiple of 3");
    }
    else
    {
        if (flagA ==1 && flagB == 1)
        {
            printf("This is valid string");
        }
        else
        {
            printf("Invalid String");
        }
    }
    return 0;
}
