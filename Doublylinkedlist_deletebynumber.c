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
struct node *del(struct node *list,int num)
{
    struct node *temp,*temp1;
    if(list->data==num)
    {
        temp=list;
        list=list->next;
        free(temp);

    }
    else
    {
        for(temp1=list;temp1!=NULL&&temp1->data!=num;temp1=temp->next);
        for(temp=list;temp->next!=temp1;temp=temp->next);
        temp->next=temp1->next;
        
        free(temp1);

    }
    return list;

}
int main()
{
    struct node *list=NULL;
    int num;
    list=create(list);
    display(list);
    printf("enter number");
    scanf("%d",&num);
    list=del(list,num);
    display(list);
}
