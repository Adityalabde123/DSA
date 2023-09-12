#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
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
 struct node* insertmid(struct node *list,int num,int pos)
{
   struct node *newnode,*temp;
   int i;
    newnode = (struct node*)malloc(sizeof(struct node));
   if (newnode == NULL) {
      printf("Memory allocation failed\n");
      return list;
   }
   newnode->data = num;
   newnode->next = NULL;

   if (pos == 1) {
      newnode->next = list;
      list = newnode;
      return list;
   }

   temp = list;
   for (i = 1; i < (pos - 1) && temp != NULL; i++, temp = temp->next);

   if (temp == NULL) {
      printf("Position is out of bounds\n");
      free(newnode);
      return list;
   }

   newnode->next = temp->next;
   temp->next = newnode;
   
   return list;
}

int main()
{
    struct node *list=NULL;
    int num,pos;
    list=create(list);
    display(list);
	printf("enter value");
	scanf("%d",&num);
	printf("enter position:");
	scanf("%d",&pos);
	list=insertmid(list,num,pos);
	printf("inserted mid new list:");
	display(list);  
    }
