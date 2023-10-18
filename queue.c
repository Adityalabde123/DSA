#include<stdio.h>
#define MAX 5
struct queue{
    int data[MAX];
    int rear,front;

} q;

void init(struct queue *q)
{
    q->front= -1;
    q->rear= -1;
}

int isempty(struct queue *q)
{
    if(q->front==-1 || q->front > q->rear)
    return 1;
else 
return 0;
}
int isfull(struct queue *q)
{
    if(q->rear==MAX-1)
    return 1;
   else 
   return 0;
}
void insert(int num)
{
    if(isfull(&q))
    {
        printf("stack is overflow");
    }
    else{
        if(q.front==-1)
        {
            q.front=0;
        }
        q.rear++;
        q.data[q.rear]=num;
        printf("Insert successfully");
    }
}
 int deleteq()
 {
    int val;
    if(isempty(&q))
    {
        printf("queue is underflow");
    }
    else
    {
        val=q.data[q.front];
        q.front++;
        return val;
    }
 }
 void display()
 {
    int i;
    if(isempty(&q))
    {
        printf("queue is underflow");
    }
    else
    {
        for(i=q.front;i<=q.rear;i++)
         {
            printf("%d\t",q.data[i]);
         }
    }
 }
 int main()
 {
    int num,ch;
    init(&q);
do{
      printf("1-Insert 2-delete 3-display");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:printf("enter number to print in queue");
               scanf("%d",&num);
               insert(num);
               break;
        case 2:num=deleteq();
        break;
        case 3:display();
        break;
      }
}while(ch!=4);

 }