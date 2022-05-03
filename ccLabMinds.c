#include<stdio.h>
#include<string.h>
int S3();
int S1();
int S2();
char input[20];
int ind1 = 0;
int revInd1 = 0;
int S3()
{
    printf("Inside S3\n");
    int ind = 0;
    int revInd = strlen(input)-1;
    revInd1 = revInd;
    ind1 = ind;
    int midlen = revInd/2;
    if(input[midlen]=='c')
    {
        if(S1 && S2)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int S1()
{
    printf("Inside S1\n");
    if(input[ind1]=='a' && input[ind1+1]=='b')
    {
        ind1 = ind1 + 2;
        if(S1)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int S2()
{
    printf("Inside S1\n")
    if(input[revInd1]=='d' && input[revInd1-1]=='d')
    {
        revInd1 = revInd1 - 2;
        if(S2)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int flag = 0;
    printf("Enter String: ");
    scanf("%s", input);
    puts(input);
    flag = S3();
    if (flag == 1)
    {
        printf("\nString is Valid!");
    }
    else
    {
        printf("\nString is Invalid!");
    }
    return 0;
}
