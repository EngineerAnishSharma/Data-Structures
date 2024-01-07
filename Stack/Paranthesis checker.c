#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
#define MAX 100
char stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1) printf("\nStack is full");
    else
    {
        top++;
        stack[top]=x;
    }
}
char pop()
{
    int item;
    if(top==-1)
    {
        printf("\nStack is empty");
        return 0;
    }
    else
    {
        top--;
        item=stack[top];
        return item;
    }

}
void main()
{
    char exp[MAX],temp;
    int i,flag=1;
    printf("Enter your expression:\n");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==-1)
                flag=0;
            else
            {
                temp=pop();
                if(exp[i]==')' && (temp=='{' || temp=='['))
                    flag=0;
                else if(exp[i]=='}' && (temp=='(' || temp=='['))
                    flag=0;
                else if(exp[i]==']' && (temp=='(' || temp=='{'))
                    flag=0;
            }
        }
    }
    if(top>=0)
        flag=0;
    if(flag==1)
        printf("\nExpression is valid");
    else
        printf("\nInvalid expression");
    getch();
}
