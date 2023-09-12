#include<stdio.h>
int main()
{
    int a[100],n,i,key,cnt=0;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter n number ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        cnt++;
    }
    printf("\n %d occurances %d times",key,cnt);
}