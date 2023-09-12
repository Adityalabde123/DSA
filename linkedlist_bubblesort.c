#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node* next;
};
struct node* create(struct node* head)
{
 int i,n;
 struct node* newnode,*temp;
printf("\n Enter limit :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter Value :");
scanf("%d",&(newnode->data));
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
}
return head;
}

void dis(struct node* head)
{
struct node* temp;
  for(temp=head;temp!=NULL;temp=temp->next)
{
  printf("%d\t",temp->data);
}
}
struct node* Bubble_sort(struct node* head) 
{
    int t;
    struct node* pass,i;
    for (pass = head; pass->next != NULL; pass = pass->next)
   {
          for (struct node* i= head; i->next != NULL; i = i->next) 
        {
            if (i->data > i->next->data) 
          {
            t = i->data;
            i->data = i->next->data;
            i->next->data = t;
            }
        }
    }
    return head;
}
int main()
{
  struct node* head=NULL;
  head=create(head);
  dis(head);
  printf("\n Acs Order :");
  head=Bubble_sort(head);
  dis(head);
}