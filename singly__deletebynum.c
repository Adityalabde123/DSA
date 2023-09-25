#include<stdio.h>
#include<stdlib.h>
struct node {
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
        else
        {
            temp->next = newnode;
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
struct node *delbynum(struct node *list, int num) {
    struct node *temp = list, *prev = NULL;

    // Search for the node with the given number
    while (temp->next != list) {
        if (temp->data == num) {
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    // If the node was found, delete it
    if (temp->data == num) {
        if (prev != NULL) {
            prev->next = temp->next;
        }
        if (temp == list) {
            list = list->next;
        }
        free(temp);
    }

    return list;
}
int main()
{
    int num;
    struct node *list=NULL;
    list=create(list);
    display(list);
    printf("enter number");
    scanf("%d",&num);
    list=delbynum(list,num);
    display(list);
}