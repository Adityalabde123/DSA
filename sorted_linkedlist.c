#include<stdio.h>
#include<stdlib.h>
/*typedef struct node
{
	int data;
	struct node *next;
}NODE;*/
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("Enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter value:");
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
 }
 return list;
}
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    printf("%d\t",temp->data);	
  }	
}
NODE *sort(NODE *list)
{
	int t;
	NODE *i,*j;
    for(i=list;i!=NULL;i=i->next)
    {
      for(j=list;j!=i;j=j->next)
	   {
	    if(i->data>j->data)
		{
			t=i->data;
			i->data=j->data;
			j->data=t;	
	    }	
	}
  }
  return list;
}
int main()
{
	NODE *list=NULL;
	list=create(list);
	printf("\n Display Linked List:");
	disp(list);
	list=sort(list);
	printf("\n Display sorted Linked List:");
	disp(list);
}