// create a stack using array

#include <stdio.h>
#include <stdlib.h>

int stack[100], n = 100, top = -1;

void empty()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}

void push(int val) {
    if (top >= n - 1)
        printf("Stack Overflow \n");

    else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top <= -1)
        printf("Stack Underflow \n");
    else {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top >= 0) {
        printf("\n The elements in Stack are:");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    } else
        printf("\n The stack is empty");
}

int main() {
    int ch, val;
    printf("0) Check if stack is empty\n");
    printf("1) Push in stack\n");
    printf("2) Pop from stack\n");
    printf("3) Display stack\n");
    printf("4) Exitn");
    do {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch) {
        case 0: {
            empty();
            break;
        }
        case 1: {
            printf("Enter value to be pushed:");
            scanf("%d", &val);
            push(val);
            break;
        }
        case 2: {
            pop();
            break;
        }
        case 3: {
            display();
            break;
        }
        case 4: {
            printf("Exit\n");
            break;
        }
        default: {
            printf("Invalid Choice \n");
        }
        }
    } while (ch != 4);
    return 0;
}
