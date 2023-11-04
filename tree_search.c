#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *left,*right;
}*root;
struct node *insert(struct node *root,int num)
{
   if(root==NULL)
   {
       root=(struct node*)malloc(sizeof(struct node));
       root->data=num;
       root->left=NULL;
       root->right=NULL;
      return root;
   }
   if(num>root->data)
   {
        root->right=insert(root->right,num);
        return root;
    }
   if(num<root->data)
   {
        root->left=insert(root->left,num);
        return root;
    }
}
struct node* search(struct node* root,int key)
{
    struct node *temp=root;
    while(temp!=NULL&&temp->data!=key)
    {
        if(key<temp->data)
        temp=temp->left;
       else
       temp=temp->right;
    }
}
int main()
{
    int num,ch,n,i;
    root=NULL;
    do{
        printf("\n 1-insert \n 2-search");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter limit");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("enter number");
                scanf("%d",&num);
                root=insert(root,num);
            }
            break;
            case 2:printf("enter number to search");
            scanf("%d",&num);
            if(search(root,num)==NULL)
            printf("not found");
           else
           printf("found");
          break;
        }
    }while(ch<3);
}