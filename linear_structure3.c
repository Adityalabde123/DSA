#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,i,num,flag=0;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]= rand()%10;
    }
  printf("random number=");
  for(i=0;i<n;i++)
  {
    printf("%d\t",&a[i]);

  }
  printf("enter number to search");
  scanf("%d",&num);
 for(i=0;i<n;i++)
 {
    if(a[i]==num)
    
    flag=1;
    break;
 }
 if(flag=1)
 
    printf("number is  found");
    else
    printf("number is not found");
 

}

