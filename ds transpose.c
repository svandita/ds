#include<stdio.h>
void main()
{

    int a[10][10],t[10][10],i,r1,com1,j,k;
    printf("enter the number of rows and column of first matrix\n");
    scanf("%d %d",&r1,&com1);

    printf("enter the elements of of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        scanf("%d",&a[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<com1;i++)
    {
        for(j=0;j<r1;j++)
         t[j][i]=a[i][j];
    }
    printf("the transpose of matrix is\n");
    for(i=0;i<com1;i++)
    {
        for(j=0;j<r1;j++)
            printf("%d\t",t[i][j]);
        printf("\n");
    }

}

