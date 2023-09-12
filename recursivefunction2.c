#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,a;
    printf("enter number");
    scanf("%d",&n);
    a=fact(n);
    printf("factorial=%d",a);
}