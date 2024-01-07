#include<stdio.h>
#include<stdlib.h>
#define N 5
int deque[N];
int front=-1,rear=-1;

void insertRear(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1)
        printf("\nDeque is full\n");
    else
    {
        rear=(rear+1)%N;
        deque[rear]=x;
    }
}
void delFront()
{
    if(front==-1 && rear==-1)
        printf("\nDeque is empty\n");
    else if(front==rear)
        front=rear=-1;
    else
    {
        front=(front+1)%N;
    }
}
void insertFront(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }

    else
    {
        if(front==0)
        {
            front=N;
        }
        front=(front-1)%N;
        deque[front]=x;
    }
}
void delRear()
{
    if(front==-1 && rear==-1)
        printf("\nDeque is empty");
    else if(front==rear)
        front=rear=-1;
    else if(rear==0)
        rear=N;
    else
    {
        rear=(rear-1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
        printf("Deque is empty");
    else
    {
        printf("\nPrinting deque:\n");
        while(i!=rear)
        {
            printf("%d ",deque[i]);
            i=(i+1)%N;
        }
        printf("%d",deque[i]);
    }
}
void main()
{
    insertFront(56);
    insertFront(22);
    insertRear(5);
    insertRear(3);
    insertRear(1);
    display();
    delFront();
    delFront();
    delFront();
    display();
    insertFront(4);
    insertFront(14);
    insertFront(46);
    display();
    delRear();
    display();
    getch();
}
