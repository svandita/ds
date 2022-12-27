#include<stdio.h>
int main()
{
    int i,arr[5];
    for(i=0;i<5;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }

}

