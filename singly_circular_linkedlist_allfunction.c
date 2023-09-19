#include<stdio.h>
#include<stdlib.h>
struct node{
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
struct node *insertmid(struct node *list,int num,int pos)
{
    struct node *temp,*newnode;
    int i;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list,i=1;i<(pos-1)&&temp->next!=list;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next=newnode;
    return list;
}
struct node *insertend(struct node *list,int num)
{
    struct node *temp,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list;temp->next!=list;temp=temp->next);
     temp->next=newnode;
        newnode->next=list;
        return list;
    

}
struct node *delbeg(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp1=list;
    temp->next=list;
    free(temp1);
    return list;
}
struct node *delend(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next->next!=list;temp=temp->next);
    temp1=temp->next;
    temp->next=list;
    free(temp1);
    return list;
}
struct node *delmid(struct node *list,int pos)
{
    int i;
    struct node *temp,*temp1;
    for(temp=list;i=1;i<(pos-1)&&temp->next!=list,i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    free  (temp1);
    return list;
}
int main()
{
    struct node *list=NULL;
    int num,pos,ch;
    do{
        printf("enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:list=create(list);
                   break;
            case 2:display(list);
            break;
            case 3:printf("enter number to print at the beggining ");
                   scanf("%d",&num);
                   list=insertbeg(list,num);
                   break;
            case 4:printf("enter number to print at the middle: ");
                   scanf("%d",&num);
                   printf("enter position");
                   scanf("%d",&pos);
                   list=insertmid(list,num,pos);
                   break;
            case 5:printf("enter number to print at the end");
            scanf("%d",&num);
            list=insertend(list,num);
                   break;
            case 6:delbeg(list);
                   break;
            case 7:delend(list);
                   break;
            case 8:printf("enter position");
                   scanf("%d",&pos);
                   delmid(list,num);
                   break;
        }
    }while(ch<9);
}