#include<stdio.h>
#include<string.h>
int flag = 0;
int s(char string[],int i ,int j)
{
    if(string[i]=='a' && string[j]=='b')
    {
        flag = 1;
        i++;
        j--;
        sdash(string,i,j);
    }
    else
    {
        flag = 0;
        return 0;
    }
}
int sdash(char string[],int i, int j)
{
    if(strlen(string)==2)
    {
        flag = 1;
    }
    else
    {
        for(;i <(strlen(string)/2);i++, j--)
        {
            printf("%d %d %d\n",i, j,strlen(string)/2);
            if(i+1 == j-1)
            {
                flag = 0;
                return 0;
            }

            if(string[i]=='a' && string[j]=='b')
            {
                flag = 1;
            }

            else
            {
                flag = 0;
                return 0;
            }
        }
    }
}
int main()
{
    char str[] = "aaaabbbb";
    int i = 0;
    int j = strlen(str)-1;
    s(str, i , j);
    printf("%d This is flag", flag);
    return 0;
}
