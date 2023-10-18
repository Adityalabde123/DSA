#include<stdio.h>

#define MAX 5
struct queue{
    int data[MAX];
    int front,rear;

}*q;
void init()
{
    q->front=-1;
    q->rear=-1;
}
int isempty()
{
    if(q->front==-1||q->front>q->rear)
    return 1;
else
 return 0;
}
int isfull()
{
    if(q->rear==MAX-1)
    return 1;
else 
return 0;

}
void insert(int num)
{
    if(isfull())
    {
    printf("queue is overflow");
}
  else
  {
    if(q->front==-1)
    q->front=0;
    q->rear++;
    q->data[q->rear]=num;
    printf("\n Insert successful");

  }
}
void deleteq()
{
    int val;
    if(isempty())
    {
        printf("stack is underflow");
    }
    else
    {
        val=q->data[q->front];
        q->front++;
        printf("deleted value=%d",val);
    }

}
void disp()
{
    int i;
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d\t",q->data[i]);
    }
}
int main()
{
    int ch,num;
    init();
    do{
        printf("1-insert 2-delete 3-disp");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter number");
                   scanf("%d",&num);
                   insert(num);
                   break;
            case 2:deleteq();
                    break;
            case 3:disp();
                   break;       
        }
    }while(ch<4);
}