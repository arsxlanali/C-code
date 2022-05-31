#include <stdio.h>
#include <string.h>
char firstset[3][2];
char followset[3][4];
void first(char input[][3])
{
    for (int i=0;i<3;i++)
    {
        int j=0;
        char set=input[i][j];
        //printf("%c",set);

        char current=input[i][j+1];
        //printf("\nFirst set of %c is :",set);
        firstset[i][0] = set;
        int flag=1;
        for (int k=0;k<3;k++)
        {
            if (current==input[k][0])
            {
                //printf(" %c ",current);// it is terminal
                current=input[k][1];
                flag=1;
                k=0;
            }
            else
            {
                flag=0;
            }
        }
        if (flag==0)//means it is terminal
        {
            //printf(" %c ",current);
            firstset[i][1] = current;

        }

    }
    //printf("%s", &first);
}
void follow(char input[][3])
{
    char * ptr;
    for(int i=0; i<3; i++)
    {
        for(int j=1; j<3; j++)
        {
            followset[i][0] = 'S';
            followset[i][1] = '$';
            if(input[i][j]=='A')
            {
                char first = input[i][j++];
                for(int k= 0; k<3; k++)
                {
                    int l =0;
                    if(firstset[k][l]==first)
                    {
                        followset[i][1]=firstset[k][l+1];
                    }
                    l++;
                }
            }
            else if(input[i][j]=='B')
            {
                char first = input[i][j++];
                for(int k= 0; k<3; k++)
                {
                    int l =0;
                    if(firstset[k][l]==first)
                    {
                        followset[i][1]=firstset[k][l+1];
                    }
                    l++;
                }
            }
        }
    }


}
int main()
{
    //S->AB
    //A->a
    //B->B
    char CFG[3][3]={{'S','A','B'},{'A','a'},{'B','b'}};
    char FirstSet[3][2];
    //char FollowSet[3][3];
    first(CFG);
    follow(CFG);
    printf("%s", &followset);
    return 0;
}
