#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack1[N],stack2[N];
int top1=-1;
int top2=-1;
int count=0;

void push1(int x)
{
    if(top1==N-1)
        printf("\nStack is full");
    else
    {
        top1++;
        stack1[top1]=x;
    }
}
int pop1()
{
    int a=0;
    if(top1==-1)
        printf("\nStack is empty");
    else
    {
        a=stack1[top1];
        top1--;
    }
    return a;
}
void push2(int x)
{
    if(top2==N-1)
        printf("\nStack is full");
    else
    {
        top2++;
        stack2[top2]=x;
    }
}
int pop2()
{
    int b=0;
    if(top2==-1)
        printf("Stack is empty");
    else
    {
        b=stack2[top2];
        top2--;
    }
    return b;
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int a,i;
    if(top1==-1 && top2==-1)
        printf("\nStack is empty");
    else
    {
        for(i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        pop2();
        count--;
        for(i=0;i<count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}
void display()
{
    int i;
    printf("\nPrinting queue:\n");
    for(i=0;i<=top1;i++)
    {
        printf("%d ",stack1[i]);
    }
}
void main()
{
    enqueue(5);
    enqueue(3);
    enqueue(2);
    enqueue(9);
    display();
    dequeue();
    dequeue();
    display();
    getch();
}
