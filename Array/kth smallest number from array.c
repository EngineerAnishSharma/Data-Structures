#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100];
    int i,j,temp=0,flag,n,k;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("\nEnter array element ;\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=1;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j],arr[j]=arr[j+1],arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1) break;
    }
    printf("\nEnter k:\n");
    scanf("%d",&k);
    if(k<=n)
    {
        printf("Kth largest number is %d",arr[k-1]);
    }
    else
        printf("\nEnter valid value of k..");
    getch();
}


