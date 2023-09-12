#include<stdio.h>
int main()
{
    int a[100],n,num,i;
    void search(int a[100],int n,int num);
    printf("enter limit");
    scanf("%d",&n);
    printf("enter n number ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to search");
    scanf("%d",&num);
    search(a,n,num);

}
void search(int a[100],int n,int num)
{
    int top,bottom,mid,flag=0;
    top=0;
    bottom=n-1;
    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(a[mid]==num)
        flag=1;
        break;
        if(num>a[mid])
        {
            top=mid+1;
        }
        else
        bottom=mid-1;
    }
    if(flag==1)
    printf("number is found");
    else
    printf("number is not found");
}