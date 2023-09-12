#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node *next;
};
struct node* create(struct node* list)
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
struct node *delend(struct node *list) {
    if (list == NULL) {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }

    struct node *temp = list;
    struct node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        // If there's only one node in the list
        free(list);
        return NULL;
    } else {
        prev->next = NULL;
        free(temp);
        return list;
    }
}
int main()
{
    struct node *list=NULL;
    list=create(list);
    display(list);

    list=delend(list);
    display(list);
 
}   
