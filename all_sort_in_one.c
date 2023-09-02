#include<stdio.h>
int main()
{
    int a[100],i,n,ch,num;
   void insertion(int a[100],int n);     //declaring function..
   void bubble(int a[100],int n);        //declaring function..
   void selection(int a[100],int n);         //declaring function..
   void liner_serach(int a[100],int n,int num);  //declaring function..
   
   printf("enter limit");
   scanf("%d",&n);
   printf("enter n elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   do
   {
    printf("\n 1-insertion /n 2-bubble /n 3-selection /n 4-search /n enter chioce:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insertion(a,n);
        break;
        case 2:bubble(a,n);
        break;
        case 3:selection(a,n);
        break;
        case 4:printf("enter number to serach");
        scanf("%d",&num);
        liner_serach(a,n,num);
        break;
        default:printf("invalid choice");

   }   
  }while(ch<5);
}
  void insertion(int a[100],int n)
  {
    int i,j,t,num;
    for(i=1;i<n;i++)
    {
    num=a[i];
    for(j=i-1;j>=0&&num<a[j];j--)
    {
        t=a[j+1];
        a[j+1]=a[j];
        a[j]=t;
    }
  }
    printf("sorted no=");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
  }
   void bubble(int a[100],int n)
   {
   int pass,i,t;
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("sorted no=");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
   }
    void selection(int a[100],int n)
    {
    int i,j,index,min,t;
    for(i=0;i<n;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                index=j;
            }
        }
        t=a[j];
        a[i]=a[index];
        a[index]=t;
    }
    printf("sorted=");
    for(i-0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
 }
  void liner_serach(int a[100],int n,int num)
  {
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            break;
        }

    }
    if(flag=1)
    printf("number is found");
    else
    printf("number is not found");
  }

