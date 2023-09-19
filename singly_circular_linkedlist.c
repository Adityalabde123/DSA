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
int main()
{
    struct node *list=NULL;
    list=create(list);
    display(list);
}