#include<stdio.h>
#include<stdlib.h>
#define N 3
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{

    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front)
    {
        printf("\nOverflow");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    printf("\nPrinting Queue:\n");
    while(i!=rear)
    {
        printf("%d ",queue[i]);
        i=(i+1)%N;
    }
    printf("%d ",queue[i]);
}
void main()
{
    int ch=1,item;
    while(ch)
    {
        printf("Enter item:\n");
        scanf("%d",&item);
        enqueue(item);
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&ch);
    }
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    getch();
}
