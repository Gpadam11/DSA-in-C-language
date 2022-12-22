// stack using linked list data structure.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void empty()
{
    if (top == NULL)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}

void push(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (!temp)
        printf("Stack Overflow \n");
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack is empty !\n");
        return;
    }
    temp = top;
    top = top->next;
    free(temp);
}

void print()
{
    struct node *temp = top;
    printf("Stack: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int c;
    while (c != 5)
    {
        printf("\nEnter your choice:\n1.Check for Empty Stack\n2. Push elements \n3. Pop elements\n4.Print the stack \n5. Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            empty();
            break;
        case 2:
            printf("\nEnter the element to be pushed\n");
            int x;
            scanf("%d", &x);
            push(x);
            break;
        case 3:
            printf("\nPopping the element\n");
            pop();
            break;
        case 4:
            printf("\nDispaly stack");
            print();
            break;
        case 5:
            printf("\nExit\n");
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
    return 0;
}