#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *create(struct node *list)
{
    struct node *temp,*newnode;
    int i,n;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        if(list==NULL)
        {
            list=temp=newnode;
            newnode->next=list;
        }
        else
        {
            temp->next=newnode;
            newnode->next=list;
            temp=newnode;
        }
    }return list; 

}
void display(struct node *list)
{
    struct node *temp=list;
    do{
          printf("%d\t",temp->data);
          temp=temp->next;
    }while(temp!=list);
}
struct node *delbynum(struct node *list,int num)
{
   struct node *temp,*temp1;
   for(temp=list;temp->next!=NULL;temp=temp->next)
   {
    if(temp->data==num)
    {
        break;
    }
   }  
   if(temp!=NULL)
   {
    for(temp1=list;temp1->next!=NULL;temp=temp1->next);
    temp1->next=temp->next;
    free(temp1);
   

   }
   return list;
}
int main()
{
    int num;
    struct node *list=NULL;
    list=create(list);
    display(list);
    printf("enter number");
    scanf("%d",&num);
    list=delbynum(list,num);
    display(list);
}