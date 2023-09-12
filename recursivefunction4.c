#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
    return 1;
   else
   return x*power(x,y--);
}
int main()
{
    int x,y,p;
    printf("enter x & y");
    scanf("%d%d",&x,&y); 
    p=power(x,y);
    printf("base to power=%d",p);
}