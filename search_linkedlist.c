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
struct node* search(struct node *list,int num)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        if(temp->data==num)
        {
            return temp;
        }
    }
    return temp;
}
int main()
{
    struct node *list=NULL;
    int num;
    list=create(list);
    display(list);

    printf("enter number");
    scanf("%d",&num);
    if(search(list,num)!=NULL)
    printf("found");
    else
    printf("not found");
}