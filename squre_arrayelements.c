#include<stdio.h>
int main()
{
    int a[100],i,b[100],n;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter n number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    b[i]=a[i]*a[i];
    printf("first array=");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
   printf("second array=");
   for(i=0;i<n;i++)
   printf("%d\t",b[i]);
}