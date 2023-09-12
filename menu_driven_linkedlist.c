#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node{
    int data;
    struct node *next;
 };
 struct node *create(struct node *list)
 {
    struct node *newnode,*temp;
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
        temp=newnode;
      }
      }return list;
    }
 void display(struct node *list)
 {
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }

 }
 struct node* insertbeg(struct node *list,int num)
 {
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=list;
    list=newnode;
    return list;
 }
 struct node* insertend(struct node *list,int num)
 {
    struct node* newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=num;
    for(temp=list;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return list;
   }
struct node* insertmid(struct node *list,int num,int pos)
{
    struct node *newnode,*temp;
    int i;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    for(i=1;temp=list;i<(pos-1)&&temp->next!=NULL,i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next=newnode;
    return list;
}
struct node* delbeg(struct node *list)
{
    struct node *temp;
    temp=list;
    list=list->next;
    free(temp);
    return list;
}
int main()
{
    struct node* list=NULL;
    int num,pos,ch;
    
    do{
      printf("\n 1-create \n 2-display \n 3-insertbeg");
      printf("\n 4-insertend \n 5-insert mid \n 6-delbeg");
     printf("enter choice");
    scanf("%d",&ch);
    	switch(ch)
    	{
		
          case 1:list=create(list);
                 break;
          case 2:display(list);
          break;
          case 3:printf("enter number");
                 scanf("%d",&num);
                list=insertbeg(list,num);
                break;
          case 4:printf("Enter numeber");
                 scanf("%d",&num);
                 list=insertend(list,num);
                 break;
          case 5:printf("enter number");
          scanf("%d",&num);
          printf("enter position");
          scanf("%d",&pos);
          list=insertmid(list,num,pos);
          break;
          case 6:list=delbeg(list);
          break;
        }
	}while(ch<7);
}
