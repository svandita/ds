#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int x,value;
    struct node *top,*temp, *r;
    top=NULL;
    x=1;
    printf("push in linked list\n");
    while(x)
    {
        printf("enter the value to be pushed");
        scanf("%d",&value);
        if(top==NULL)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=NULL;
          top=temp;
       }
       else
       {
         temp=(struct node*)malloc(sizeof(struct node));
          temp->data=value;
          temp->link=top;
          top=temp;
       }
       printf("want to insert more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=top;
      int count=0;
       while(temp!=NULL)
       {
           printf("%d ->",temp->data);
           temp=temp->link;
           count++;
       }
       printf("\n the number of nodes are %d",count);
       x=1;
       printf("\n pop in linked list\n");

   while(x)
    {
        if(top==NULL)
        {
          printf("stack empty");
          exit(1);
       }
       else
       {
         temp=top;
         top=top->link;
         free(temp);
       }
       printf("want to pop more then press 1");
       scanf("%d",&x);
    }
       printf("\n");
       temp=top;
       count=0;
       while(temp!=NULL)
       {
           printf("%d ->",temp->data);
           temp=temp->link;
           count++;
       }
       printf("\n the number of nodes are %d",count);
       return 0;
}
