#include<stdio.h>
#include<stdlib.h>
  struct node
{
    int data;
    struct node *next,*prev;
};
struct node *create(struct node *list)
{
    struct node *temp=NULL,*newnode;
    int n,i;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {  
		   list=newnode;
           temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    return list;
}
void display(struct node *list)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        printf("%d",temp->data);
    }
}
struct node *insertmid(struct node *list,int num,int pos)
{
    struct node *newnode,*temp;
    int i;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    for(i=1,temp=list;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
    return list;

}
int main()
{
    struct node *list=NULL;
    int num,pos;
    list=create(list);
    display(list);
    printf("enter number to print middle:");
    scanf("%d",&num);
    printf("enter position:");
    scanf("%d",&pos);
    list=insertmid(list,num,pos);
    display(list);
}
