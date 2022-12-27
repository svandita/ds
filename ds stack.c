#include<stdio.h>
#include<stdlib.h>


void Push(int S[],int N,int* Top,int x);
int Pop(int S[],int N, int*Top);
void display(int [],int);
int main()
{
  int Top=-1,x,i;//40,60,100,80,90 push pop pop 70 push 3 pop push
  int N;
  printf("enter stack size\n");
  scanf("%d",&N);
  int S[N],y;
  {
    printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);
  }
  display(S,Top);
  //2 pop
  printf("\n pop operations\n");
     y=Pop(S,N,&Top);
  printf("%d <-- ",y);

    printf("\n pop operations\n");
     y=Pop(S,N,&Top);
  printf("%d <-- ",y);
  // push 70
  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);
  //3 pop
  printf("\n pop operations\n");
     y=Pop(S,N,&Top);
  printf("%d <-- ",y);

    printf("\n pop operations\n");
     y=Pop(S,N,&Top);
  printf("%d <-- ",y);

  printf("\n pop operations\n");
     y=Pop(S,N,&Top);
  printf("%d <-- ",y);
  //push 20,30
  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

  printf("enter the no. to be pushed");
  scanf("%d",&x);
  Push(S,N,&Top,x);
  printf("top = %d\n",Top);

display(S,Top);
  return 0;
 }
 void Push(int S[],int N,int*Top,int x)
 {
   if((*Top)+1==N)
   {
     printf("Stack Overflow\n");
     exit(1);
   }
   else
   {
     (*Top)++;
     S[*Top] = x;
   }
  }
  int Pop(int S[],int N,int*Top)
  {

    int y;
    if((*Top) ==-1)
    {
      printf("Stack underflow\n");
      exit(1);
    }
    else
    {
      y = S[*Top];
      (*Top)--;
      return y;
     }
    }
void display(int S[],int Top)
    {
      int t=Top;
      while(t!=-1)
       {
         printf("%d\t",S[t]);
         t--;
        }
    }



