#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*rear,*front,*temp,*newnode;

void init()
{
    rear=front=NULL;

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
        rear=front=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        newnode->next=front;
        printf(" insert successful");

    }
}
void delq()
{
    int val;
    if(isempty())
    {
        printf("stack is uinderflow");
    }
    else{
        temp=front;
        val=front->data;
        if(front->next==front)
        {
            free(front);
        }
        else{
            front=front->next;
            rear->next=front;
            free(temp);
        }
    }
}
void disp()
{
    temp=front;
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=front);
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