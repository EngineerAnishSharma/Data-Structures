#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front=-1,*rear=-1,*newnode;
void enqueue(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=0;
    if(front==-1 && rear==-1)
    {
        front=rear=newnode;
        rear->link=newnode;
    }
    else
    {
        rear->link=newnode;
        rear=newnode;
        newnode->link=front;
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==-1 && rear==-1)
        printf("Underflow");
    else
    {
        rear->link=temp->link;
        front=temp->link;
    }
}
void display()
{
    struct node*temp;
    printf("Printing node:\n");
    temp=front;
    while(temp!=rear)
    {
        printf("%d ",temp->data);
        temp=temp->link;
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
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&ch);
    }
    display();
    dequeue();
    dequeue();
    display();
    getch();
}
