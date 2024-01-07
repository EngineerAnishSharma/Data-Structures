#include <stdio.h>
#include <conio.h>
int main()
{
    //printf("Hello World");
    int arr[100];
    int i,j,pos;
    int size=5;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("Enter delete num;\n");
    scanf("%d",&pos);
    for(i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

