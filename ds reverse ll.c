#include<stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node *next;
  };
int getNthFromLast( struct Node *head, int n)
{
     struct Node *temp,*prev;
    head=temp->next;
    prev=NULL;

    while(head!=NULL)
    {
        prev=temp;
        temp=head;
        head=head->next;
        temp->next=prev;
    }

    int count=1;
    while(count<=n)
    {
        head=head->next;
        count++;
        }
    int value =head->data;
    return value;
}
int main()
{
    struct Node *top,*r,*p;
    int k,l,m,value,n;
    printf("enter the no of node\n");
    scanf("%d",&k);
    l=1;
    while(l<=k)
    {
        printf("enter the value ");
        scanf("%d",&value);
        if(top==NULL)
        {
            r=(struct Node*)malloc(sizeof(struct Node));
            r->data=value;
            r->next=NULL;
            top=r;
            p=r;
        }
        else
        {
            r=(struct Node*)malloc(sizeof(struct Node));
            r->data=value;
            r->next=top;
            top=r;
        }
        l++;
    }
    r=p;
    while(r!=NULL)
    {
        printf("%d->",r->data);
        r=r->next;
    }
    printf("\n enter the node");
    scanf("%d",&n);
    m=getNthFromLast(p, n);
    printf("%d",m);

}

