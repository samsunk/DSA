#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

struct stack
{
    char arr[MAX];
    int top;
} s;

// push function
void push(char item)
{
    if (s.top == MAX - 1)
    {
        printf("Stack is full \n");
    }
    else
    {
        s.top += 1;
        s.arr[s.top] = item;
    }
}
// pop function
void pop()
{
    if (s.top == -1)
        printf("Stack is empty \n");
    else
        s.top -= 1;
}

// checking pair
int checkPair(char val1, char val2)
{
    return (val1 == '(' && val2 == ')');
}

// checking stack is balance or not
int checkBalance(char expr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (expr[i] == '(')
        {
            push(expr[i]);
        }
        else if (expr[i] == ')')
        {
            if (s.top == -1)
            {
                return 0;
            }
            else if (checkPair(s.arr[s.top], expr[i]))
            {
                pop();
                continue;
            }
        }
    }
    if (s.top < 0)
        return 1;
    else
        return 0;
}
int main()
{
    char expr[] = "((()))";
    s.top = -1;

    int length = strlen(expr);
    checkBalance(expr, length) ? printf("Balanced \n") : printf("Not balanced\n");

    return 0;
}