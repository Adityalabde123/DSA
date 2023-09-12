#include<stdio.h>
#include<stdlib.h>
  struct node
{
    int data;
    struct node *next,*prev;
};
struct node *create(struct node *list)
{
    struct node *temp,*newnode;
    int n,i;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {  list=newnode;
           temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }return list;
}
void display(struct node *list)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        printf("%d",temp->data);
    }
}
struct node *insertend(struct node *list,int num)
{
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(list==NULL)
    {
        list=newnode;
    }
    else{
    for(temp=list;temp->next!=NULL;temp=temp->next)
    {
        temp->next=newnode;
        newnode->prev=temp;
    }
}
return list;
}
int main()
{
    struct node *list=NULL;
   
    list=create(list);
    display(list);
    
    int num;
    printf("enter number to print end");
    scanf("%d",&num);
    list=insertend(list,num);
    display(list);
}