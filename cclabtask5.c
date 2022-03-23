#include <stdio.h>
#include <string.h>
int main()
{
    char string[20] = "abccc";
    printf("%s\n", string);
    int flagA = 0;
    int flagB = 0;
    int flagC = 0;
    for(int i= 0; i<strlen(string); i++)
    {
        if (i<=1)
        {
            if (string[0]=='a')
            {
                flagA = 1;

            }
            else
            {
                flagA = -1;
                break;
            }
        }
        if (strlen(string)> 1)
        {

            if (string[1]=='b')
            {
                flagB = 1;
            }
            else
            {
                flagB = -1;
                break;
            }
        }
        if (strlen(string)>2 && i > 1)
        {
            if (string[i]=='c')
            {
                flagC = 1;
            }
            else
            {
                flagC = -1;
                break;
            }
        }
    }
    if (flagA == 1 && flagB== 1 && flagC == 1 || flagA == 1 && flagB== 1 && flagC == 0 || flagA == 1 && flagB== 0 && flagC == 0 || flagA == 1 && flagB== -1 && flagC == 0)
    {
        printf("This is valid string");
    }
    else
    {
        printf("Invalid String!");
    }
    return 0;
}
