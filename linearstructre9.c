    //reverse the string..
    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char s1[100] [100];
        int i,n;
        printf("enter limit");
        scanf("%d",&n);
        printf("enter n city name ");
        for(i=0;i<n;i++)
        
            scanf("%s",&s1[i]);
        
        printf("reverse city=");
        for(i=0;i<n;i++)
        
            printf("%s\t",strrev(s1[i]));
        
    }
