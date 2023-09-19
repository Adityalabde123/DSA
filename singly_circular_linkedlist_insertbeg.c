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
    }
    return list;

}
void display(struct node *list)
{
  struct node *temp=list;
  do{
    printf("%d",temp->data);
    temp=temp->next;
  }while(temp!=list);
}
struct node *insertbeg(struct node *list,int num)
{
  struct node *temp,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  for(temp=list;temp->next!=list;temp=temp->next);
  newnode->next=list;
  list=newnode;
  temp->next=list;
  return list;

}
int main()
{
    struct node *list=NULL;
    int num;
    list=create(list);
    display(list);
    printf("enter num to print at the begining");
    scanf("%d",&num);
    list=insertbeg(list,num);
    display(list);
}