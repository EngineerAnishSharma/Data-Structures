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
void delAtPos()
{
    int pos,i=1;
    struct node *temp,*prenode;
    printf("\nEnter position;\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        prenode=temp;
        temp=temp->next;
    }
    temp->next->prev=prenode;
    prenode->next=temp->next;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    delAtPos();
    printf("\nAfter deletion at any position:\n");
    display();
    getch();
}

