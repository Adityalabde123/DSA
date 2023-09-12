#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter polynominal limit");
    scanf("%d",&n);
    printf("enter fiorst poly");
    for(i=0;i<n;i++)
    {
        printf("\n enter coeiffient if x^%d=",i);
        scanf("%d",&a[i]);
    }
    printf("\n display=");
    for(i=0;i<n;i++)
    printf("%dx^%d+",a[i],i);
}