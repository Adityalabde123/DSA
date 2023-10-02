#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
    int coeff;
    int expo;
    struct node *next;
};
struct node *create(struct node *list)
{
    struct node *temp,*newnode;
    int n,i;
    printf("enter limit of poly");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter coeff:");
        scanf("%d",&newnode->coeff);
        newnode->expo=i;
        newnode->next=NULL;
        if(list==NULL)
        {
            list=temp=newnode;
        }
        else{
            temp->next=newnode;
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
        printf("%dX^%d+",temp->coeff,temp->expo);
    }
    printf("\b");
}
struct node *evaluate(struct node *list,int x)
{
    struct node *temp;
    int ans=0;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        ans=ans+temp->coeff*pow(x,temp->expo);
    }
    return ans;
}
int main()
{
    struct node *list=NULL;
    int x;
    list=create(list);
    display(list);
    printf("enter value of x:");
    scanf("%d",&x);
    printf("evaluation of poly=%d",evaluate(list,x));
}

