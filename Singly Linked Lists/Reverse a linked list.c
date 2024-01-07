#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head,*newnode,*currentnode;
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0) head=currentnode=newnode;
        else
        {
            currentnode->next=newnode;
            currentnode=newnode;
        }
        printf("\nDo you to add node:\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
    printf("\nPrinting node:\n");
    currentnode=head;
    while(currentnode!=0)
    {
        printf("%d ",currentnode->data);
        currentnode=currentnode->next;
    }
    struct node *prenode,*nextnode;
    prenode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prenode;
        prenode=currentnode;
        currentnode=nextnode;
    }
    head=prenode;

    currentnode=head;
    printf("\nAfter reversing:\n");
    while(currentnode!=0)
    {
        printf("%d ",currentnode->data);
        currentnode=currentnode->next;
    }
    getch();
}
