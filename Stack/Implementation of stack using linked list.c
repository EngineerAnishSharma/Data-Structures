#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0,*newnode;
void push(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    struct node *temp;
    if(top==0) printf("\nstack is empty");
    else
    {
        temp=top;
        printf("\nPrinting stack:\n");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
void pop()
{
    struct node*temp;
    if(top==0) printf("\nUnder flow");
    else
    {
        temp=top;
        printf("\nPopped element is %d",temp->data);
        top=top->link;
        free(temp);
    }
}
void peek()
{
    if(top==0) printf("\nStack is empty");
    else
        printf("\nPeeked element is %d",top->data);
}
void main()
{
    int ch=1,item;
    while(ch)
    {
        printf("\nEnter items :\n");
        scanf("%d",&item);
        push(item);
        printf("\nDo you want to continue push?\n1 for yes\n0 for no\n");
        scanf("%d",&ch);
    }
    display();
    peek();
    pop();
    display();
    peek();
    pop();
    getch();
}
