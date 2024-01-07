#include<stdio.h>
#include<conio.h>
#include<limits.h>

int getMax(int a[],int n)
{
    int max=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}

void countSort(int a[],int n,int pos)
{
    int key=9,i,b[n];
    int count[key+1];
    for(i=0;i<=key;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        ++count[(a[i]/pos)%10];
    }
    for(i=0;i<=key;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[--count[(a[i]/pos)%10]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
void radixSort(int a[],int n)
{
    int max=getMax(a,n);
    int i,pos;

    for(pos=1;max/pos>0;pos=pos*10)
    {
        countSort(a,n,pos);
    }
}
void main()
{
    int a[100];
    int n,i;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("\nEnter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nPrinting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    radixSort(a,n);
    printf("\nPrinting sorting array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
