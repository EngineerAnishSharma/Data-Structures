#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
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
        newnode->prev=0;
        if(head==0)
            head=temp=newnode;
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("\nDo you want to continue?\n1 for yes\n0 forno\n");
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
void insertAtBeg()
{
    struct node*temp;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data at beginning:\n");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    temp->prev=newnode;
    head=newnode;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    insertAtBeg();
    printf("\nPrinting after insertion at beginning:\n");
    display();
    getch();
}
