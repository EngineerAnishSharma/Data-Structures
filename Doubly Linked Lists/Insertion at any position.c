#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node *head,*newnode;
void create()
{
    head=0;
    int choice=1;
    struct node *temp;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("\nDo you want to add node?\n1for yes\n0 for no\n");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node*temp;
    temp=head;
    int count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
}
void insertAtPos()
{
    struct node*temp;
    int i=1,count=4;
    int pos;
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    if(pos>count || pos<0) printf("\nInvalid position\n");
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data at %d postion \n",pos);
        scanf("%d",&newnode->data);
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
    }
}
void main()
{
    create();
    printf("\nPrinting node\n");
    display();
    insertAtPos();
    printf("\nAfter insertion at position :\n");
    display();
    getch();
}

