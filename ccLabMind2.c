#include <stdio.h>
#include <string.h>

int L(char string[])
{
    // for(int i = 0; )
    if (string[0] >= 65 && string[0] <= 90 || string[0] >= 97 && string[0] <= 122 || string[0] == 95)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int L1(char string[])
{
    int flag = 0;
    int lenght = strlen(string);
    for (int i = 1; i < lenght; i++)
    {
        if (string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122 || string[i] == 95)
        {
            flag =  1;
        }
        else
        {
            flag =  0;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int D(char string[])
{
    int flag = 0;
    int lenght = strlen(string);
    for (int i = 1; i < lenght; i++)
    {
        if (string[i] >= 48 && string[i] <= 57)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Sign(char string[])
{
    if (string[0] == '+' || string[0] == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int SC(char string[])
{
    char array[6] = {'!', '@', '#', '%', '^', '*'};
    for (int i = 0; i <= 5; i++)
    {
        if (strcmp(string, array[i]) == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    int c;
    FILE *FPR;
    FPR = fopen("input.txt", "r");
    printf("\n");
    char input[1024];
    while (fscanf(FPR, " %1023s", input) == 1)
    {
        if (L(input) == 1 || SC(input) == 1 || L1(input))
        {
            puts(input);
            printf("This is Variable: %s \n", input);
            continue;
        }
        else if (Sign(input) == 1 && D(input) == 1)
        {
            puts(input);
            printf("This is Digit: %s\n", input);
            continue;
        }
        return 0;
    }
