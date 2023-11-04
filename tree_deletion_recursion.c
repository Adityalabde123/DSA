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
struct node *rec_delete(struct node *root,int n)
{
  struct node *temp,*succ;
  
  if(root==NULL)
  {
    printf("number not found");
    return root;
  }
  if(n<root->data)
  {
   root->left=rec_delete(root->left,n);
  } else if(n>root->data){
   root->right=rec_delete(root->right,n);
  } else{
      if(root->left!=NULL&&root->right!=NULL)
      {
        succ=root->right;
        while(succ->left)
        succ=succ->left;
        root->data=succ->data;
        root->right=rec_delete(root->right,succ->data);
      }
      else{
        temp=root;
        if(root->left!=NULL)
        root=root->left;
        else if(root->right!=NULL)
        root=root->right;
        else
        root=NULL;
        free(temp);
      }

}
return(root);
}
int main()
{
  int ch,i,num,nl,n;
   root=NULL;
  do{
      printf("1-insert 2-deletion");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:printf("enter limit");
               scanf("%d",&nl);
               for(i=0;i<nl;i++)
               {
                  printf("enter number to insert");
                  scanf("%d",&num);
                  root=insert(root,num);
               }
               break;
        case 2:printf("enter number to delete");
               scanf("%d",&n);
               root=rec_delete(root,n);
               break;
      }
  }while(ch<3);
}