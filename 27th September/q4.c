// WAP to convert an postfix expression into equivalent infix expression

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// Stack Operations
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    if (!stack) // Unable to allocate memory
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int *)malloc(stack->capacity * sizeof(int));

    return stack;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

char peek(struct Stack *stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack *stack)
{
    if (!isEmpty(stack)) // Stack is not empty
        return stack->array[stack->top--];
    return '$'; // Stack is empty
}

void push(struct Stack *stack, char op)
{
    stack->array[++stack->top] = op;
}

// A utility function to check if
// the given character is operand
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// A utility function to return precedence of a given operator
// Higher returned value means higher precedence
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}

int postfixToInfix(char *postfix)
{
    struct Stack *stack = createStack(strlen(postfix));
    int i, k;

    if (!stack) // stack memory not allocated
        return -1;

    for (i = 0, k = -1; postfix[i]; ++i)
    {
        // If the scanned character is an operand, add it to output.
        if (isOperand(postfix[i]))
            postfix[++k] = postfix[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if (postfix[i] == '(')
            push(stack, postfix[i]);

        // If the scanned character is an ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (postfix[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                postfix[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1; // invalid expression
            else
                pop(stack);
        }
        else // an operator is encountered
        {
            while (!isEmpty(stack) && Prec(postfix[i]) <= Prec(peek(stack)))
                postfix[++k] = pop(stack);
            push(stack, postfix[i]);
        }
    }

    // pop all the operators from the stack
    while (!isEmpty(stack))
        postfix[++k] = pop(stack);

    postfix[++k] = '\0';
    printf("%s", postfix);
}

// Driver program to test above functions
int main()
{
    char postfix[] = "ab*c"; 
    postfixToInfix(postfix);
    return 0;
}

//WRONG CODE
