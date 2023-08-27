#include<stdio.h>
#include<string.h>
int main()
{
   struct student{
    int rno;
    char name[20];
    float per;
   }s1[100],t;
   int i,n,pass;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter information=");
   for(i=0;i<n;i++)
   {
    scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
   }
   for(pass=1;pass<n;pass++)
   {
     for(i=0;i<n-pass;i++)
     {
        if(strcmp(s1[i].name,s1[i+1])>0)
        {
          strcpy(t,s1[i].name);
          strcpy(s1[i].name,s1[i+1]);
          strcpy(s1[i+1],t);
           }
     }
   }
   printf("display student information");
   for(i=0;i<n;i++)
   printf("\n%d\t%s\t%f",s1[i].rno,s1[i].name,s1[i].per);  
}