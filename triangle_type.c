#include<stdio.h>
#include<math.h>

int main(void)
{
    int a,b,c,x,y,z,d,e,f;
    printf("First side of Triangle: ");
    fflush(stdin);
    scanf("%d",&a);
    printf("Second side of Triangle: ");
    fflush(stdin);
    scanf("%d",&b);
    printf("Third side of Triangle: ");
    fflush(stdin);
    scanf("%d",&c);
    d = b*b+c*c;
    e = a*a+c*c;
    f = a*a+b*b;
    x = sqrt(d);
    y = sqrt(e);
    z = sqrt(f);
    if (x==a)
    {
        printf("Triangle is Right Angled");
    }
    else if (y==b)
    {
        printf("Triangle is Right Angled");
    }
    else if (x==c)
    {
        printf("Triangle is Right Angled");
    }
    else
    {
        printf("Not a Right Angled");
    }

}
