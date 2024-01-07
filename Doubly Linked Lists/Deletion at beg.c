#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail,*newnode;
void create()
{
    int choice=1;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0) head=tail=newnode;
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    //printf("\nPrinting node:\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delAtBeg()
{
    head->next->prev=0;
    head=head->next;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    delAtBeg();
    printf("\nAfter deletion at beginning:\n");
    display();
    getch();
}
