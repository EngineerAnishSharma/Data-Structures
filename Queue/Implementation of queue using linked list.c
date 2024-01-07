#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *link;
};
struct queue *front=-1,*rear=-1,*newqueue;

void enqueue(int x)
{
    newqueue=(struct queue*)malloc(sizeof(struct queue));
    newqueue->data=x;
    newqueue->link=0;
    if(front==-1 && rear==-1)
    {
        front=rear=newqueue;
    }
    else
    {
        rear->link=newqueue;
        rear=newqueue;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else
    {
        front=front->link;
    }
}
void display()
{
    struct queue*temp;
    temp=front;
    if(front==-1 && rear==-1)
        printf("\nQueue is i\empty");
    else
    {
        printf("\nPrinting queue:\n");
        while(temp!=rear)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
void main()
{
    int ch=1,item;
    while(ch)
    {
        printf("Enter item:\n");
        scanf("%d",&item);
        enqueue(item);
        printf("\nDo you want to continue?\n1 for yrs\n0 for no\n");
        scanf("%d",&ch);
    }
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    display();
    getch();
}

