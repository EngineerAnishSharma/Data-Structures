#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *next;
};
void main()
{
    int choice=1,i=1,count=0,pos;
    struct node *head,*newnode,*temp,*prenode;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nDo you to continue ?\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
    //Display
    temp=head;
    printf("\nPrinting node\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nLength of linked list is %d",count);
    getch();
}



