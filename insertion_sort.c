
#include<stdio.h>
int main()
{
	int a[100],i,j,n,t,num;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
	
	
     
	
	  while (j > 0 && a[j - 1] > a[j]) 
        {
            t = a[j];
            a[j] = a[j - 1];
            a[j - 1] = t;
            j--;
        }
    }
      printf("soted no=");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d\t",a[i]);
		  }	
	}
