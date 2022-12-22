// Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} queue;
queue *a;
queue *front;
queue *rear;

void enqueue()
{
    if (rear == NULL)
    {
        printf("OVERFLOW\n");
        exit(0);
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d", &rear->data);
        rear->next = (queue *)malloc(sizeof(queue));
        front = a;
        rear = rear->next;
    }
}
void dequeue()
{
    if (rear == NULL)
        printf("UNDERFLOW\n");
    else
    {
        printf("Element deleted is %d\n", front->data);
        queue *temp = front;
        front = front->next;
        a = front;
        free(temp);
    }
}
void peek()
{
    if (front == rear)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n", front->data);
    }
}
void display()
{
    queue *i = a;
    while (i != rear)
    {
        if (i->data != 0)
            printf("%d \n", i->data);
        i = i->next;
    }
}
void isempty()
{
    if (rear == NULL)
        printf("Yes the queue is empty\n");
    else
        printf("No the queue is not empty\n");
}
void isfull()
{
    if (rear == NULL)
        printf("No the queue is empty\n");
    else
        printf("Yes the queue is full\n");
}

int main()
{
    a = (queue *)malloc(sizeof(queue));
    rear = a;
    front = a;
    printf("A queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");
    printf("7.  To exit\n");
    char c;

    do
    {

        printf("Enter the choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            isempty();
            break;

        case 6:
            isfull();
            break;
        case 7:
        
            printf("Exit \n");
            break;
        
        default:
        
            printf("Invalid choice \n");
        
        }

    } while (c != 7);
}