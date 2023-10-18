#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

struct stack {
    char data[MAX];
    int top;
} s;

void init() {
    s.top = -1;
}

int isfull() {
    if (s.top == MAX - 1)
        return 1;
    else
        return 0;
}

int isempty() {
    if (s.top == -1)
        return 1;
    else
        return 0;
}

void push(char ch) {
    if (isfull())
        printf("stack is full");
    else {
        s.top++;
        s.data[s.top] = ch;
    }
}

char pop() {
    char val;
    if (isempty())
        printf("stack is empty, can't pop");
    else {
        val = s.data[s.top];
        s.top--;
        return val;
    }
}

int priority(char k) {
    if (k == '(')
        return 0;
    if (k == '+' || k == '-')
        return 1;
    if (k == '*' || k == '/')
        return 2;
    if (k == '$' || k == '^')
        return 3;
}

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char infix[100], prefix[100], ch;
    int i, j = 0;
    printf("Enter infix expression: ");
    scanf("%s", infix);

    reverseString(infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    init();

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalpha(infix[i]))
            prefix[j++] = infix[i];
        else if (infix[i] == '(')
            push(infix[i]);
        else if (infix[i] == ')') {
            while ((ch = pop()) != '(') {
                prefix[j++] = ch;
            }
        } else {
            while (!isempty() && priority(s.data[s.top]) >= priority(infix[i])) {
                prefix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    while (!isempty()) {
        prefix[j++] = pop();
    }

    prefix[j] = '\0';
    reverseString(prefix);
    printf("Prefix string: %s", prefix);

    return 0;
}
