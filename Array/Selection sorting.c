#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
    int arr[100];
    int i,j,temp=0,flag,n,pos,min;
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
        min=INT_MAX;
        pos=-1;
        for(j=i;j<n;j++)
        {
            if(min>arr[j]){
                min=arr[j];
                pos=j;
            }
        }
        temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
    printf("\nAfter Selection sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    getch();
}


