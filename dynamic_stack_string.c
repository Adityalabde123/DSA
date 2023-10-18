#include<stdio.h>
#include<stdlib.h>

struct node {
    char data;
    struct node *next;
};
struct node *top;
void init()
{
    top=NULL;
}
int isempty()
{
    if(top==NULL)
    return 1;
    else
    return 0;
}
void push(char s1)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=s1;
    newnode->next=top;
    top=newnode;
    printf("\n push successfully");
}
int pop()
{
    int val;
    struct node *temp;
    if(isempty())
    {
        printf("stack is underflow");
        return 0;
    }
    else{
        temp=top;
        val=temp->data;
        top=top->next;
        free(temp);
        return val;
    }
}
int peek()
{
    return (top->data);
}
void disp()
{
    struct node *temp;
    for(temp=top;temp!=NULL;temp=temp->next)
    {
        printf("%c\n",temp->data);
    }
}
int main()
{
    char s1[20];
    int i;
    init();
    printf("enter string");
    scanf("%s",&s1);
    for(i=0;s1[i]!='\0';i++)
    {
        push(s1[i]);
    }
    disp();
    printf("last element=%c",peek());
}