#include<stdio.h>
struct student
{
    int rno;
    char sname[20];
    float per;
}s1[100];
int main()
{
    int i,n,flag=0,rnum;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("enter rollno sname per");
        scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
    }
    printf("enter student rno to search");
    scanf("%d",&rnum);
    for(i=0;i<n;i++)
    {
        if(s1[i].rno==rnum)
        {
        flag=1;
        break;
    }
    }
    if(flag==1)
    {
        printf("student name=%s",s1[i].sname);  
        printf("percentage=%f",s1[i].per);  
    }
    else
    printf("information not found");
}