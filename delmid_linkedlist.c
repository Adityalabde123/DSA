#include<stdio.h>
#include<stdlib.h>
 struct node{
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
            list=newnode;
            temp=newnode;
        }       
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }return list;
}
void display(struct node* list)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
    printf("\n");
}
struct node* delmid(struct node *list,int pos)
{
    struct node *temp,*temp1;
    int i;
    for(i=1;temp=list;i<(pos-1)&&temp->next==NULL,i++;temp=temp->next);
    temp1=temp->next;
    temp->next=temp->next;
    free(temp1);
    return list;n
}
int main()
{
    struct node *list=NULL;
    int pos;
    list=create(list);
    display(list);

    printf("enter position");
    scanf("%d",&pos);
    list=delmid(list,pos);
    display(list);
}