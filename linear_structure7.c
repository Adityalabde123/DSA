//find and replace the number...
#include<stdio.h>
int main()
{
    int a[100],n,i,x,y;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to find");
   scanf("%d",&x);
    printf("enter number to replace");
    scanf("%d",&y);
for(i=0;i<n;i++)
{
    if(a[i]==x)
    {
        a[i]=y;
    }
}
 printf("replace array=");
 for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }

}       