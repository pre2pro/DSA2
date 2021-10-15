#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 30
char s[MAX];
int top = 0;


int push(char element)
{
    ++top;
    s[top] = element;
}
char pop()
{
    char element;
    element = s[top];
    --top;
    return (element);
}
int precedence(char element)
{
    switch(element){
        case '+':
        case '-':   return(1);
        case '*':
        case '/':   return(2);
        case '^':   return(3);
        case '(':
        case '#':   return(0);
    }
}


void main()
{
    char infix[MAX], postfix[MAX], ch, element;
    int i = 0, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", &infix);
    push('#');

    for (i = 0; i < strlen(infix); i++)
    {
        ch = infix[i];

        if (isalnum(ch))
            postfix[j++] = ch;
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (s[top] != '(')
            {
                postfix[j++] = pop();
            }
            element = pop();
        }
        else
        {
            while (precedence(s[top]) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }
    while (s[top]!='#')
    {
        postfix[j++] = pop();
    }
    postfix[j]='\0';
    printf("Postfix Conversion: %s", &postfix);
    
}

