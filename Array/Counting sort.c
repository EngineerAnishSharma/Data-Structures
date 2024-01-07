#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100],b[100];
    int n,i,j,key=9;
    int count[key+1];
    for(i=0;i<=key;i++)
    {
        count[i]=0;
    }
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("\nEnter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ++count[arr[i]];
    }
    for(i=1;i<=key;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[--count[arr[i]]]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
    printf("\nPrinting sorting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
