#include <stdio.h>
int stack[20];
int top = 0; 
void Push(int num)
{
    if(top>=20)
    {
        printf("Stack overflowed! Element cannot be Pused\n");
    }
    else
    {
        stack[top] = num;
        top++;
    }
}
void Poop()
{
    if(top<=0)
    {
        printf("Stack underflowed! Element Cannot Pooped\n");
    }
    else
    {
        stack[top] = 0;
        top--;
    }
}
void Display()
{
    printf("Stack\n");
    if(top==0)
    {
        printf("Stack is Empty!\n");
    }
    else 
    {
        for(int i = top-1; 0 <=i; i--)
        {
            printf("Element %d: %d\n", i, stack[i]);
        }        
    }

}

int main()
{

    int choice;
    int element;
    while(1)
    {
        printf("1 - Stack Push\n");
        printf("2 - Stack Poop\n");
        printf("3 - Display\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            printf("Enter 00 to Stop Pusing element in stack\n");
            for(int i= 0; i < 20; i++)
            {
                scanf("%d", &element);
                if(element==00)
                    break;
                Push(element);
            }
        }
        if(choice==2)
        {
            Poop();
        }
        if(choice==3)
        {
            Display();
        }
    }
    return 0;
}
