#include<stdio.h>

#define MAX 5
struct queue{
    int data[MAX];
    int front,rear;
}*q;
void init(struct queue *q)
{
    q->rear=-1;
    q->front=-1;
}
int isfull(struct queue *q)
{
  if((q->front==0&&q->rear==MAX-1)||(q->front==q->rear+1))
  {
    return 1;

  }
  else{
    return 0;

  }
}
int isempty(struct queue *q)
{
    if(q->front==-1)
    return 1;
    else
    return 0;
}
void insert(int num)
{
    if(isfull(q))
    {
        printf("queue is overflow");

    }
    else{
        if(q->front==-1)
        {
            q->front=0;
        }
        q->rear=(q->rear+1)%MAX;
        q->data[q->rear]=num;
        printf("insert successful");
    }
}
void deleteq()
{
    int val;
    if(isempty(q))
    {
        printf("queue is underflow");
    }
    else
    {
        val=q->data[q->front];
        if(q->front==q->rear)
        {
            q->front=q->rear=-1;
        }
        q->front=(q->front+1)%MAX;
        printf("Deleted valud=%d",val);
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
    void init(q);
    do{
        printf("enter number ");
        scanf("%d",&num);
        switch(ch)
        {
            case 1:printf("enter number to print");
            scanf("%d",&num);
            insert(num);
            break;
            case 2:deleteq();
            break;
            case 3:disp();
                  break;
        }
    }while(ch!=4);
}