#include<stdio.h>

void main()
{
    int arr[10];
    int i,n,num,pos=0;
    int flag=0;
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
    printf("\nEnter element:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==1)
        printf("\n%d is found at %d postion",num,pos);
    else
        printf("\nIt is not found");
    getch();
}
