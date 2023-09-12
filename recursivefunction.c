#include<stdio.h>
 int sum(int n)
 {
    if(n==0)
    return 0;
else
return n+sum(n-1);
 }
 int main()
 {
    int n,a;
    printf("enter number");
    scanf("%d",&n);
    a=sum(n);
    printf("sum of 1 to n=%d",a);
 }