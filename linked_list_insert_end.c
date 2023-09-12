#include<stdio.h>
#include<stdlib.h>

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
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {
            list=newnode;
            temp=newnode;
        }
        else
        {
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
struct node* insertend(struct node *list,int num)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->data=num;
	for(temp=list;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return list;
}
int main(){
    struct node *list=NULL;
    list=create(list);
    display(list);

    int num;
    printf("insert list at the end");
    scanf("%d",&num);
    list=insertend(list,num);

    printf("updated list:");
    display(list);
}
