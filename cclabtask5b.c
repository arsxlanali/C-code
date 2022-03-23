// This program is for plindrome of a and b
// s -> aSa
// s -> bSb
// s -> e


#include <stdio.h>
#include <string.h>
int main()
{
    char string[20] = "aabbaa";
    printf("%s\n", string);
    int flagA = 0;
    int flagB = 0;
    int oddFlag = 0;
    for (int i=0, j = strlen(string)-1; i< strlen(string)/2; i++, j--)
    {
        if(strlen(string)%2!=0)
        {
            oddFlag = 1;
            break;
        }
        if (strlen(string)< 3)
        {
            if (string[0]=='a' && string[1]=='a')
            {
                flagA = 1;
            }
            else if (string[0]=='b' && string[1]=='b')
            {
                flagB = 1;
            }
        }
        else
        {
            if (string[i] == 'a' && string[j]=='a' || string[i] == 'b' && string[j]=='b')
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
    }
    if (flagA ==1 && flagB == 1)
    {
        printf("This is valid string");
    }
    else if (oddFlag == 1)
    {
        printf("String is odd");
    }
    else
    {
        printf("Invalid String");
    }
    return 0;
}
