#include<cskstack.h>
int main()
{
    char infix[100], prefix[100], ch;
    int i, j = 0;

    printf("Enter infix string: ");
    scanf("%s", infix);

    init();
    strrev(infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        if (isalpha(infix[i]))
            prefix[j++] = infix[i];
        else if (infix[i] == '(')
            push(infix[i]);
        else if (infix[i] == ')')
        {
            while ((ch = pop()) != '(')
            {
                prefix[j++] = ch;
            }
        }
        else
        {
            while (!isempty() && priority(s.a[s.top]) >= priority(infix[i]))
            {
                ch = pop();
                prefix[j++] = ch;
            }
            push(infix[i]);
        }
    }

    while (!isempty())
    {
        ch = pop();
        prefix[j++] = ch;
    }

    prefix[j] = '\0';

    printf("\nPrefix string: %s\n", prefix);

    return 0;
}
