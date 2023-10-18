#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 50
struct stack{
    int data[MAX];
    int top;
}s;
void init()
{
    s.top= -1;
}
int isfull()
{
    if(s.top==MAX-1)
    return 1;
   else 
   return 0;

}
int isempty()
{
    if(s.top==-1)
    return 1;
    else 
    return 0;
}
void push(int num)
{
    if(isfull())
    printf("stack is full");
else{
    s.top++;
    s.data[s.top]= num;
}
}
int pop() {
    int val;
    if (isempty()) {
        printf("stack is empty don't pop\n");
        return -1;  // Return a sentinel value to indicate an error
    } else {
        val = s.data[s.top];
        s.top--;
        return val;
    }
}

int main()
{
    char s1[20];
    int i,a,b,c,d,val1,val2,res;
   
    printf("enter postfix expression");
    gets(s1);
    printf("enter values of a,b,c,d ");
     scanf("%d %d %d %d", &a, &b, &c, &d);
   init();
    for(i=0;s1[i]!='\0';i++)
    {
        if(isalpha(s1[i]))
        {
            switch(s1[i])
            {
                case 'a':push(a);break;
                case 'b':push(b);break;
                case 'c':push(c);break;
                case 'd':push(d);break;
            }
        }
        else{
            val1=pop();
            val2=pop();
          switch(s1[i])
          {
            case '+':res = val2 + val1;break;
            case '-':res = val2 - val1;break;
            case '*':res = val2 * val1;break;
            case '/':res = val2/ val1;break;
          }
          push(res);
        }
    }
    printf("result=%d",pop());
}
