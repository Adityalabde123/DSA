#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
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
            list->prev=newnode;

        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            temp->next=list;
            list->prev=temp;
        }
    }return list;
}
void display(struct node *list)
{
    struct node *temp;
    temp=list;
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=list);
}
struct node *insertbeg(struct node *list,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list;temp->next!=list;temp=temp->next);
    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    temp->next=list;
    list->prev=temp;
	return list;
}
struct node *insertend(struct node *list,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=list;
    list->prev=newnode;
    return list;
}
struct node *insertmid(struct node *list,int pos,int num)
{
   struct node *newnode,*temp;
   int i;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
for(temp=list,i=1;i<(pos-1)&&temp->next!=list;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
    return list;
}
struct node *delbeg(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp1=list;
    list=list->next;
    temp->next=list;
    list->prev=temp;
    free(temp1);
    return list;
}
struct node *delmid(struct node *list,int pos)
{
    struct node *temp,*temp1;
    int i;
    for(temp=list;i=1;i<(pos-1)&&temp->next!=list,i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    free (temp1);
    return list;
}
struct node *delend(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp1=temp;
    temp=temp->prev;
    temp->next=list;
    list->prev=temp;
    free(temp1);
    return list;
}

int main()
{
    struct node *list=NULL;
    int ch,num,pos;
    do{
    	printf("enter choice:");
    	scanf("%d",&ch);
 switch(ch)
 {
    case 1:list=create(list);
           break;
    case 2:display(list);
           break;
    case 3:printf("enter number to print at the beagging:");
           scanf("%d",&num);
           list=insertbeg(list,num);
           break;
    case 4:printf("enter number to print at the end:");
           scanf("%d",&num);
           list=insertend(list,num);
           break;
    case 5:printf("enter position:");
    scanf("%d",&pos);
    printf("enter number to print at the middle:");
       scanf("%d",&num);
    list=insertmid(list,pos,num);
    break;
    case 6:list=delbeg(list);
    break;
    case 7:printf("enter position");
     scanf("%d",&pos);
    list=delmid(list,pos);
     break;
    case 8:delend(list);
     break;
}
}while(ch<9);
}