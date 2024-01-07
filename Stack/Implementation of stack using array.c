#include<stdio.h>
#include<conio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int item;
    printf("\nEnter Data:\n");
    scanf("%d",&item);
    if(top==N-1) printf("\Overflow");
    else{
        top++;
        stack[top]=item;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("\nUnder flow");
    }
    else{
        item=stack[top];
        top--;
        printf("\nPoped item is %d",item);
    }
}
void peek()
{
    if(top==-1) printf("\nStack is empty");
    else
    {
        printf("\nTop or peek element from satack is %d",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("\nStack is empty");
    else{
        printf("\nDislpay of stack:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
void main()
{
    int condition=1;
    while(condition)
    {
        int choice;
        printf("1-Push\n2-Pop\n3-Peek\n4-Display\nPlease enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default :
            printf("\nInvalid choice...");
        }
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&condition);
    }
    getch();
}
