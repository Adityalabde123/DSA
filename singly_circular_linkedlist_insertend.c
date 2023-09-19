#include<stdio.h>
#include<stdlib.h>
struct node {
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
    }
    return list;

}
void display(struct node *list)
{
  struct node *temp=list;
  do{
    printf("%d",temp->data);
    temp=temp->next;
  }while(temp!=list);
}
struct node *insertend(struct node *list,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
        if (list == NULL) {
        newnode->next = newnode;  // Circular list with one element pointing to itself
        list = newnode;          // Update the list pointer to the new node
    } else {
        temp = list;
        while (temp->next != list) 
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = list;
    }
    return list;
}



/*struct node *insertend(struct node *list, int num)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;

    if (list == NULL) {
        newnode->next = newnode;  // Circular list with one element pointing to itself
        list = newnode;          // Update the list pointer to the new node
    } else {
        temp = list;
        while (temp->next != list) 
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = list;
    }
    return list;
}
*/
int main()
{
    struct node *list=NULL;
    int num;
    list=create(list);
    display(list);
    printf("enter number to print at the end");
    scanf("%d",&num);
    list=insertend(list,num);
    display(list);
}