#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>



struct node
{
    int data;
    struct node *next;
};
struct node* create(struct node *head)
{
    struct node *newnode,*temp;
    int i,n;
    printf("enter limit");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
struct node* insertbeg(struct node *head,int num )
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=head;
  head=newnode;
  return head;
}
struct node* insertend(struct node *head,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(temp=head;temp->next=NULL;temp->next);
  temp->next=newnode;
  return head;
}
int main()
{
    struct node *head=NULL;
    int ch,num;
    do 
    {
      printf("\n 1-create \n 2-display \n 3-insertbeg \n 4-insertend");  
      printf("enter choice");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:head=create(head);
        break;
        case 2:display(head);
        break;
        case 3:printf("enter number");
               scanf("%d",&num);
               head=insertbeg(head,num);
               break;
        case 4:printf("enter number");
               scanf("%d",&num);
               head=insertend(head,num);
               break;
        default:printf("invalid choice");
        break;

      }
    }while(ch<5);
}


