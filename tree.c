#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int *left,*right;
}*root;
   struct node *insert(struct node *root,int num)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
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
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }

}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
int main()
{
    int num,ch,n,i;
    root=NULL;
    do{
        printf("enter choice");
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
            case 2:inorder(root);
            break;
            case 3:preorder(root);
            break;
            case 4:postorder(root);
            break;
        }
    }while(ch<5);
}
