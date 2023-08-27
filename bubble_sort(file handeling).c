#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *F1;
    int i=0,pass,n=0;
    struct emp
    {
        int no;
        char ename[20];

    }e1[100],t;
    f1=fopen("emp.txt","r");
    if(f1==NULL)
    {
        printf("file not found");
        exit(0);
    }
    while(!feof(f1))
    {
        fscanf(f1,"%d%s",&e1[i].no,&e1[i].ename);
        i++;
    }
    n=i;
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(strcmp(e1[i].ename,e1[i+1].ename)>0)
            {
                t=e1[i];
                e1[i]=e1[i+1];
                e1[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("\n %d /t %s",e1[i].no,e1[i].enmae);
   fclose(f1);
}