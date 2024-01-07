#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *tail,*newnode;
void create()
{
    tail=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=tail->next;
    //printf("\nPrinting node:\n");
    while(temp->next!=tail->next)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void insertAtBeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=tail->next;
    tail->next=newnode;
}
void insertAtEnd()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
}
void insertAtPos()
{
    struct node*temp;
    int i=1,pos;
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=tail->next;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    insertAtBeg();
    printf("\nAfter insertion at beginning:\n");
    display();
    insertAtEnd();
    printf("\nAfter insertion at end:\n");
    display();
    insertAtPos();
    printf("\nAfter insertion at position:\n");
    display();
    getch();
}
