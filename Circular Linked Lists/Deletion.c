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
void delAtBeg()
{
    struct node*temp;
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
}
void delAtEnd()
{
    struct node *temp;
    temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=tail->next;
    tail=temp;
}
void delAtPos()
{
    struct node*temp,*prenode;
    int i=1,pos;
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    prenode=0;
    temp=tail->next;
    while(i<pos)
    {
        prenode=temp;
        temp=temp->next;
        i++;
    }
    prenode->next=temp->next;
    free(temp);
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
    printf("\nAfter deletion at ending:\n");
    display();
    delAtPos();
    printf("\nAfter deletion at position:\n");
    display();
    getch();
}

