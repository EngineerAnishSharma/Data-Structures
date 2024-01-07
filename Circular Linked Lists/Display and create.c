#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode;
void create()
{
    struct node *temp;
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node*temp;
    temp=head;
    printf("\nPrinting node:\n");
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void main()
{
    create();
    display();
    getch();
}
