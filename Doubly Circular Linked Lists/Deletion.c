#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail,*newnode;
void create()
{
    head=0;
    int ch=1;
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=tail=newnode;
            tail->next=newnode;
            tail->prev=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        printf("\nDo you want to continue?\n1 for yes\n0 for no\n");
        scanf("%d",&ch);
    }
}
void display()
{
    struct node *temp;
    temp=head;
   // printf("\nPrinting data:\n");
    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void delAtBeg()
{
    tail->next=head->next;
    head->next->prev=tail;
    head=head->next;
}
void delAtEnd()
{
    tail->prev->next=head;
    head->prev=tail->prev;
    tail=tail->prev;
}
void delAtPos()
{
    struct node *temp;
    temp=head;
    int i=1,pos;
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}
void main()
{
    create();
    printf("\nPrinting node:\n");
    display();
    delAtBeg();
    printf("\nAfter deletion at beginning:\n");
    display();
    delAtEnd();
    printf("\nAfter deletion at end:\n");
    display();
    delAtPos();
    printf("\nAfter deletion at position;\n");
    display();
    getch();
}

