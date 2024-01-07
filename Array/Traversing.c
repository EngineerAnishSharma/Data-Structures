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
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("\nAfter traversing\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    getch();
}
