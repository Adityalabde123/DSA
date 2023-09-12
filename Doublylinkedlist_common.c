#include<stdio.h>
#include<stdlib.h>
  struct node
{
    int data;
    struct node *next,*prev;
};
struct node *create(struct node *list)
{
    struct node *temp=NULL,*newnode;
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
            newnode->prev=temp;
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
        printf("%d",temp->data);
    }
}struct node *insertcommon(struct node *list, int num, int pos) {
    struct node *temp, *newnode;
    int i;

    newnode = (struct node *)malloc(sizeof(struct node));
   
    newnode->data = num;
      if (pos == 1) {
        newnode->next = list;
        if (list != NULL) {
            list->prev = newnode;
        }
        list = newnode;
    } else {
        for (i = 1, temp = list; i < pos - 1 && temp != NULL; i++, temp = temp->next);
        if (temp == NULL) {
            printf("Invalid position.\n");
            free(newnode); // Free the allocated memory for the new node.
            return list; // Don't insert, return the original list.
        }
        newnode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return list;
}

int main()
{
    struct node *list=NULL;
    int num,pos;
    list=create(list);
    display(list);
    printf("enter number");
    scanf("%d",&num);
    printf("enter position");
    scanf("%d",&pos);
    list=insertcommon(list,num,pos);
    display(list);
}
