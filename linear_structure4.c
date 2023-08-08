#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20][20],name[20];
    int i,n,flag=0;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter student name");
    for(i=0;i<n;i++)
    {
        scanf("%s",s1[i]);
    }
    printf("enter name to search");
    scanf("%s",&name);
    {
      if(strcmp(s1[i],name)==0)
      flag=1;
     
    }
    if(flag==1)
    printf("name is found");
    else 
    printf("name is not found");
    
    }
