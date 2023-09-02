#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,index;
	char s1[20][20],t[20],min[20];
	printf("%d",&n);
	printf("enter student name");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(i-0;i<n;i++)
	{
		strcpy(min,s1[i]);
		index=i;
		for(j=i;j<n;j++)
		{
			if(strcmp(s1[i],min)<0);
		}
		strcpy(t[],s1[i]);
		strcpy(s1[i],s1[index]);
		strcpy(s1[index],t[i]);
	}
	printf("sorted names:");
	for(i=0;i<n;i++)
	{
		printf("%s",s1[i]);
	}
}
