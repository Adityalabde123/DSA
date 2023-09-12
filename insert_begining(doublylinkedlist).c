#include<stdio.h>
#include<stlib.h>
struct node{
    int data;
    struct noe *next,*prev;
};
struct node *create(struct node *list)
{
    int i,n;
    struct node *newnode,*temp;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node)malloc(struct node*);
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
            newnode->prev=newnode;
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
        printf("%d\t",temp->data);
    }
}
struct node *insertbeg(struct node *list,int num)
{
    struct node *newnode;
    newnode=(struct node)malloc(sizeof(struct node*));
    newnode->data=num;
    newnode->next=NULL;
    list->prev=newnode;
    list=newnode;
    return list;
}
int main()
{
    struct node *list=NULL;
    list=create(list);
    display(list);
    list=insertbeg(list);
}