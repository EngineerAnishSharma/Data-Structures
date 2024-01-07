#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100];
    int i,j,n,search,flag=0,pos=0;
    printf("Enter a aaray size:\n");
    scanf("%d",&n);
    printf("\nEnter aaray element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter your searching number :\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==0)
        printf("\nNot found....\nEnter valid number which is present in the array");
    else
        printf("\nYour element %d is found at %d position",search,pos);
    getch();
}
