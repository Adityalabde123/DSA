#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>



struct node
{
    int data;
    struct node *next;
};
struct node* create(struct node *list)
{
    struct node *newnode,*temp;
    int i,n;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {
            list=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return list;
}
void display(struct node *list)
{
    struct node *temp=list;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void disp_second(stuct node *list)
{
     struct node *temp=list,*temp1;
     for(temp=list;temp!=NULL;temp=temp->next)
     temp1=list;
    list=list->next;
    temp1->next=NULL;
    temp->next=temp
    return list;

}
int main()
{
    struct node *list=NULL;
    list=create(list);
    disp(list);
    list=disp_second(list);
    disp(list);

}