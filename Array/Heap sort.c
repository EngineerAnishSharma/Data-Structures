#include<stdio.h>
#include<conio.h>

void maxheapify(int a[],int n,int i)
{
    int largest=i;
    int left,right;
    left=2*i,right=2*i+1;
    while(left<=n && a[left]<a[largest])
    {
        largest=left;
    }
    while(right<=n && a[right]<a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        int temp=a[largest];
        a[largest]=a[i];
        a[i]=temp;
        maxheapify(a,n,largest);
    }
}
void heapSort(int a[],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        maxheapify(a,n,i);
    }
    for(i=n;i>=1;i--)
    {
        int temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        maxheapify(a,n,1);
    }
}
void main()
{
    int arr[100];
    int n,i;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("\nEnter element:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting array:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    heapSort(arr,n);
    printf("\nPrinting sorting array:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
