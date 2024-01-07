#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100];
    int i,j,n,temp=0;
    printf("Enter a array size:\n");
    scanf("%d",&n);
    printf("\nEnter array element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nafter sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    getch();
}
