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
    int choice=1;
    struct node *head,*newnode,*temp;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nDo you want to continue adding node:\n1 for yes\n0 for no\n");
        scanf("%d",&choice);
    }
    temp=head;
    printf("\nPrinting node:\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    //Insertion at beginning
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data where you want to insert:\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    //Display
    temp=head;
    printf("\nPrinting node after insertion:\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    getch();
}
