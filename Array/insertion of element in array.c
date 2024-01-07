#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100];
    int i,n,pos,num;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter array element;\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter your element and position where you want to insert:\n");
    scanf("%d %d",&num,&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    printf("\nAfter insertion a element:\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}
