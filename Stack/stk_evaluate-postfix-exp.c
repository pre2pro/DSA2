#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 30

int s[MAX], top = 0;
// int pushs(int element);
// int pops();
int pushs(int element)
{
     ++top;
    s[top] = element;
}
int pops()
{
    int element;
    element = s[top];
    --top;
    return(element);
}
void main()
{
    char post[MAX];
    int op2, op1, result;

    printf("Enter the postfix expression: ");
    scanf("%s", &post);

    for (int i = 0; i < strlen(post); i++)
    {
        char ch = post[i];
        if (isdigit(ch))
            pushs(ch - '0');
        else
        {
            op2 = pops();
            op1 = pops();
            switch (ch)
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '*':
                result = op1 * op2;
                break;
            case '/':
                result = op1 / op2;
                break;
            // case '^':
            //     result = pow(op1, op2);
            //     break;
            default:
                printf("Invalid character Encountered!!!!");
            }
            pushs(result);
        }
    }

    printf("Result of Above Expression is: %d", pops());
}



