#include<stdio.h>
#include<math.h>
int validateInput();

int main(void)
{
    int n,r;
    n = validateInput(n);
    r = validateInput(r);
    int num1,permutition,computition;
    int rn = n-r;
    //rn = abs(rn);
    int mul = n*r;
    int nfactorial = 1;
    int rfactorial = 1;
    int rnfactorial = 1;
    while (n>0)
    {
        nfactorial = nfactorial*n;
        n--;
    }
    while (r>0)
    {
        rfactorial = rfactorial*r;
        r--;
    }
    while (rn>0)
    {
        rnfactorial = rnfactorial*rn;
        rn--;
    }
    do
    {
        printf("Press 1 for multiplying numbers.\n");
        printf("Press 2 for finding nCr.\n");
        printf("Press 3 for finding nPr.\n");
        printf("Press -1 for Exit.\n");
        if (num1==1)
        {
            printf("Multiplication is %d",mul);
        }
        else if (num1==2)
        {
            computition = nfactorial/(nfactorial*rnfactorial);
            printf("nCr is %d",computition);
        }
        else if (num1==3)
        {
            permutition = nfactorial/rnfactorial;
            printf("nPr is %d",permutition);
        }
        scanf("%d",&num1);

    }while (num1!=-1);
}

int validateInput()
{
    int num;
    do
    {
        printf("Enter Number: ");
        scanf("%d",&num);
    }while(num<0);
    return num;
}
