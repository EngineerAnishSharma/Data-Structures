#include<stdio.h>

int merge(int arr[],int b[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb;

    //int static count++;
    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j++,k++;
        }
    }
    else if(j>ub)
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++,k++;

        }
    }
}
void mergeSort(int arr[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,b,lb,mid,ub);
    }
}
void main()
{
    int arr[100],b[100];
    int n,i;
    int lb,ub;
    printf("Enter array size:\n");
    scanf("%d",&n);
    lb=0,ub=n-1;
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
    mergeSort(arr,lb,ub);
    printf("\nPrinting sorting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    getch();
}
