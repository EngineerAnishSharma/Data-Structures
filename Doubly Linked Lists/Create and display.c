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
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    create();
    printf("\nPrinting node\n");
    display();
    getch();
}
