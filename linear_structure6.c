//copy one array to other..
#include<stdio.h>
int main()
{
    int a[100],b[100],i,n;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("copy array=");
    for(i=0;i<n;i++)
{
    printf("%d\t",b[i]);
}    
} 