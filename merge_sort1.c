#include<stdio.h>
int main()
{
    int a[50],b[50],c[100],i,j,n1,n2,n3,k;
    printf("enter limit");
    scanf("%d",&n1);
    printf("enter first array element");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter limit");
    scanf("%d",&n2);
    printf("enter second array element");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
	}
    n3=n1+n2;
    i=j=k=0;
    while(i<n1&&j<n2)
    {

        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<n1)
    {
       c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
    printf("merge array=");
    for(i=0;i<n3;i++)
{
    printf("%d",c[k]);
}    

}
