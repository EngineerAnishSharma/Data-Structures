#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 7
int queue[N];
int front =-1;
int rear=-1;
void enqueue(int x)
{
    if(front==N-1)
        printf("Overflow \n");
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 &&rear==-1)
        printf("Underflow\n");
    else if(front==rear)
        front=rear=-1;
    else
        front++;
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        int i;
        printf("\nPrinting queue;\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void main()
{
    int condition=1,item;
    while(condition)
    {
        printf("Enter item:\n");
        scanf("%d",&item);
        enqueue(item);
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&condition);
    }
    display();
    dequeue();
    display();
    dequeue();
    display();
    getch();
}
