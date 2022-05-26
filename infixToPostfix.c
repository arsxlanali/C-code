
// Arslan Ali


#include <stdio.h>
#include <string.h>
#include <ctype.h>
char stack[20];
char postfixStr[20];
int postTop = 0;
int top = -1; 
void push(char chrac)
{
    if(top>=20)
    {
        printf("Stack overflowed! Element cannot be Pused\n");
    }
    else
    {
        top++;
        stack[top] = chrac;
    }
}
char pop()
{
    if(top<=0)
    {
        printf("Stack underflowed! Element Cannot poped\n");
    }
    else
    {
        
        char temp = stack[top];
        top--;
        return temp;
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
        for(int i = top; 0 <=i; i--)
        {
            printf("Element %d: %c\n", i, stack[i]);
        }        
    }

}
int preced(char ch) {
   if(ch == '+' || ch == '-') 
   {
      return 1;
   }
   else if(ch == '*' || ch == '/') 
   {
      return 2;  
   }
   else if(ch == '^') 
   {
      return 3;
   }
   else 
   {
      return 0;
   }
}
void inToPost(char infixStr[])
{
    push('#');
    for(int i = 0; i < strlen(infixStr) ; i++)
    {
        if(isalnum(infixStr[i]))
        {
            postfixStr[postTop] = infixStr[i];
            postTop++;
        }
        else if(infixStr[i]== '(')
        {
            push('(');
        }
        else if(infixStr[i]=='^')
        {
            push('^');
        }
        else if(infixStr[i]==')')
        {
            while(stack[top]!='#' && stack[top]!='(')
            {
                postfixStr[postTop] = pop();
                postTop++;
            }
            pop();
        }
        else 
        {
            if(preced(infixStr[i]) > preced(stack[top]))
            {
                push(infixStr[i]);
            }
            else
            { 
                 while(stack[top]!='#' && preced(infixStr[i])<=preced(stack[top]))
                 {
                     postfixStr[postTop] = pop();
                     postTop++;
                 }
                 push(infixStr[i]);
            }
        }
    }
    while(stack[top]!='#')
    {
        postfixStr[postTop] = pop();
        postTop++;
    }
}


int main()
{

    char str[] = "x^y/(5*z)+2";
    inToPost(str);
    printf("%s  -->  %s", str,postfixStr);
    return 0;
}
