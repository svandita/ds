#include<stdio.h>
int main()
{
    int i,arr[10],n,j;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                printf("the repeated element is %d\n",arr[j]);
        }
    }

}

