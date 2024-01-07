#include<stdio.h>

int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb],temp=0;
    int start=lb,end=ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }

        while(arr[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            temp=arr[start],arr[start]=arr[end],arr[end]=temp;
        }
    }
    temp=arr[lb],arr[lb]=arr[end],arr[end]=temp;
    return end;
}
void quickSort(int arr[],int lb,int ub)
{
    int loc;
    if(lb<ub){
        loc=partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}
void main()
{
    int arr[100];
    int n,lb,ub,i;
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
    quickSort(arr,lb,ub);
    printf("\nPrinting Sorting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
