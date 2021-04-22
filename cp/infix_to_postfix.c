#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[200];
int top = -1;
void in_to_post(char infix[]);
void push(char);
char pop();

int main()
{
  int t;
  scanf("%d", &t);
  while(t--){
    char infix[200];
    // printf("Enter the infix notation :- \n");
    gets(infix);
    in_to_post(infix);
  }
    return 0;
}

void push(char symb)
{
    if(top>=101)
    {
        // printf("stack overflow");
        return;
    }
    else
    {
        top++;
        stack[top] = symb;
    }
}
char pop()
{
    char item;
    if(top==-1)
    {
        // printf("stack empty \n");
        return(0);
    }
    else
    {
        item = stack[top];
        top--;
    }
    return (item);
}
int preced(char ch)
{
    if(ch == 47)
    {
        return (5);
    }
    else if(ch == 42)
    {
        return (4);
    }
    else if(ch == 43)
    {
        return (3);
    }
    else
    {
        return (2);
    }
}
void in_to_post(char infix[])
{
    int length;
    static int index = 0, pos = 0;
    char  symbol, temp;
    char postfix[200];
    length = strlen(infix);
    push('#');
    while(index<length)
    {
        symbol = infix[index];
        switch(symbol)
        {
            case '(': push(symbol);
            break;

            case ')': temp = pop();
            while(temp !=  '(')
            {
                postfix[pos] = temp;
                pos++;
                temp = pop();
            }
            break;

            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            while(preced(stack[top] >= preced(symbol)))
            {
                temp = pop();
                postfix[pos] = temp;
                pos++;
            }
            push(symbol);
            break;

            default: postfix[pos++] = symbol;
            break;
        }
        index++;
    }
    while(top>0)
    {
        temp = pop();
        postfix[pos++] = temp;
    }
    postfix[pos++] = '\0';
    puts(postfix);
    return;
}
