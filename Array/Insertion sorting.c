#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100];
    int i,j,temp=0,flag,n;
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
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
