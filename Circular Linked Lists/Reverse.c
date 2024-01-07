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
void reverse()
{
    struct node *prenode,*current,*nextnode;
    current=tail->next;
    nextnode=current->next;
    while(current!=tail)
    {
        prenode=current;
        current=nextnode;
        nextnode=current->next;
        current->next=prenode;
    }
    nextnode->next=tail;
    tail=nextnode;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    reverse();
    printf("\nAfter reversing:\n");
    display();
    getch();
}

