






























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































de<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node *next;
};
void main()
{
    struct node *head,*newnode,*temp;
    int choice=1;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter your data:\n");
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
        printf("\nDo you want to continue creating node?\n1 for yes \n0 for No\n");
        scanf("%d",&choice);
    }
    temp=head;
    printf("\nPrinting node:\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    getch();
}
