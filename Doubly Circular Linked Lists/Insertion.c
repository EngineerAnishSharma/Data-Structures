#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail,*newnode;
void create()
{
    head=0;
    int ch=1;
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=tail=newnode;
            tail->next=newnode;
            tail->prev=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&ch);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    //printf("\nPrinting data:\n");
    while(temp!=tail)
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
    newnode->prev=head->prev;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void insertAtEnd()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:\n");
    scanf("%d",&newnode->data);
    newnode->prev=tail;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
}
void insertAtPos()
{
    struct node *temp;
    int i=1,pos;
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:\n");
    scanf("%d",&newnode->data);
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
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

