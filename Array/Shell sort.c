#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100];
    int n,gap,i,j;
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
    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(j=gap;j<=n;j++)
        {
            for(i=j-gap;i>=0;i=i-gap)
            {
                if(arr[i+gap]>arr[i])
                {
                    break;
                }
                int temp=arr[i+gap];
                arr[i+gap]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("\nPrinting sorting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
