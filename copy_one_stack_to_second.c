#include<stdio.h>
#define MAX 5

    struct stack
    {
        int a[MAX];
        int top;
    };
    void init(struct stack *s)
    {
        s->top=-1;
    }
    int isempty(struct stack *s)
    {
        if(s->top==-1)
        return 1;
        else
        return 0;
    }
    int isfull(struct stack *s)
    {
        if(s->top==MAX-1)
        return 1;
        else
        return 0;
    }
    void push(struct stack *s,int val)
    {
        if(isfull(s))
        printf("stack is full");
        else{
            s->top++;
            s->a[s->top]=val;
            printf("push succesfully in stack");
        }
    }
    void disp(struct stack *s)
    { int i;
        for( int i=0;i<=s->top;i++)
        {
            printf("%d",s->a[i]);
        }
        printf("\n");
    }
    int main()
    {
        int i,n,val;
        struct stack s1,s2,temp;
        init(&s1);
        init(&s2);
        init(&temp);
        printf("enter limit of stack");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("enter value");
            scanf("%d",&val);
            push(&s1,val);
        }
        for(i=s1.top;i>=0;i--)
        {
            push(&temp,s1.a[i]);
        }
        for(i=temp.top;i>=0;i--)
        {
            push(&s2,temp.a[i]);
        }
        printf("display orignal stack");
        disp(&s1);
    
        printf("display copy stack stack");
        disp(&s2);
    }