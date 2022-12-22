//WAP to sort a stack using using another temporary stack

#include <stdio.h>
#include <stdlib.h>

int stack[100], n = 100, top = -1;

void push(int val) {
    if (top>n-1)
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
void isEmpty()
{
    if(top==-1)
    printf("Stack is empty\n");
    else
   return;
}

void sort()
{
    int temp[100],temp_top=-1;
    while(top!=-1)
    {
        int x=stack[top];
        pop();
        while(temp_top!=-1 && temp[temp_top]>x)
        {
            push(temp[temp_top]);
            temp_top--;
        }
        temp_top++;
        temp[temp_top]=x;


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
    printf("1) Push in stack\n");
    printf("2) Pop from stack\n");
    printf("3) Display stack\n");
    printf("4) Sort stack\n");
    printf("5) Exit\n");
    do {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch) {
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
            sort();
            break;
        }
        case 5: {
            printf("Exit");
            break;
        }
        default: {
            printf("Invalid choice");
            break;
        }
        }
    } while (ch != 5);
    return 0;
}



