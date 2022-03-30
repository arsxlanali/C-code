#include<stdio.h>
#include<string.h>
#include <math.h>
int flag = 0;
int s(char string[],int i ,int j)
{
    if(string[i]=='a' && string[i+2] && string[j]=='b')
    {
        flag = 1;
        i = i+2;
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
        //printf("fsdjfk");
        for(;i <=strlen(string)/3;i=i+2, j--)
        {
            printf("%d %d %f\n",i, j,strlen(string)/3);
            if(string[i]=='a' && string[i+2] && string[j]=='b')
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
    char str[] = "aaaaabbb";
    int i = 0;
    int j = strlen(str)-1;
    s(str, i , j);
    printf("%d This is flag", flag);
    return 0;
}
