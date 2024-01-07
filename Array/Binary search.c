#include<stdio.h>

void main()
{
    int arr[10];
    int i,n,num,flag=0,pos;
    int start,end,mid;

    printf("Enter array size:\n");
    scanf("%d",&n);
    start=0;
    end=n-1;
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
    printf("\nEnter element:\n");
    scanf("%d",&num);
    for(i=start;i<=end;i++)
    {
        mid=(start+end)/2;
        if(arr[mid]==num)
        {
            flag=1;
            pos=mid+1;
            break;
        }
        else{
            if(arr[mid]<num)
                start=mid+1;
            else
                end=mid-1;
        }
    }
    if(flag==1)
        printf("\n%d is found at %d position",num,pos);
    else
        printf("\nNot found");
}
