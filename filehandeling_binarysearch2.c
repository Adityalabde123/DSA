#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct city
{
    char cname[20];
    int scode;
}c1[100];
int main()
{
    FILE *fp1;
    int n,code,i=0,top,bottom,mid,flag=0;
    char name[20],x[20];
    fp1=fopen("sortedcities.txt","r");
    if(fp1==NULL)
    {
        printf("file not found");
        exit(0);
    }
    while(!feof(fp1))
    {
        fscanf(fp1,"%s %d",&name,&code);
        strcpy(c1[i].cname,name);
        c1[i].scode=code;
        i++;
    }
    n=i;
    printf("enter city name to code");
    scanf("%s",&x);
    top=0;
    bottom=n-1;
    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(strcmp(x,c1[mid].cname)==0)
      {  flag=1;
        break;
    }
      if(strcmp(x,c1[mid].cname)>0)
      top=mid+1;
      else
      bottom=mid-1;
} 
     if(flag==1)
     printf("city found=%d",c1[mid].scode);
     else
     printf("city not found");

     fclose(fp1);
}
