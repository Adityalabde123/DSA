#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front,*rear,*temp,*newnode;

void init()
{
    front=rear=NULL;
}

int isempty()
{
    if(front==NULL)
    return 1;
    else
    return 0;
}
void insert(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(isempty())
    {
    front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        printf("\n print successfully");
    }
}
void delq()
{
    int val;
    if(isempty())
    {
        printf("queue is underflow");
    }
    else{
        val=front->data;
        temp=front;
        front=front->next;
        free(temp);
        printf("\n deleted value=%d",val);
    }
}
void disp()
{
    for(temp=front;temp!=NULL;temp=temp->next)
    {
        printf("%d",temp->data);
    }
}
int main()
{
    int num,ch;
    init();
    do{
        printf("\n 1-insert \n 2-delete \n 3-display");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("enter number");
                   scanf("%d",&num);
                   insert(num);
                   break;
            case 2:delq();
                   break;
            case 3:disp();
            break;
        }
    }while(ch<4);
}