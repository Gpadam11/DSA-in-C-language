// Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.

#include <stdio.h>
#include <stdlib.h>

int queue[100], size, front = -1, rear = -1;

void IsEmpty()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty \n");
    else
        printf("Queue is not empty \n");
}

void IsFull()
{
    if (rear == size - 1)
        printf("Queue is full \n");
    else
        printf("Queue is not full \n");
}

void Enqueue(int val)
{
    if ((rear+1)%size == front)
        printf("Queue is full \n");
    else
    {
        rear=(rear+1)%size;
        queue[rear] = val;
    }
}

int Dequeue()
{
           int x;
    if (front == rear)
    {
        printf("Queue Underflow \n");
      
    }
    else
    {
 
       front=(front+1)%size;
       x=queue[front];
    }
    return x;
}

void Peek()
{
    if (front == rear+1)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("The peeked element is %d \n", queue[front]);
    }
}

void Display()
{
    int i=front+1;
    do
    {
        printf("%d", queue[i]);
        i=(i+1)%size;
    } while (i!=(rear+1)%size);
    
        printf(" \n");
    }

int main()
{
    printf("Enter the capacity");
    scanf("%d", &size);


    int ch, val;
    printf("0) Check if queue is empty \n");
    printf("1) Check if queue is full \n");
    printf("2) Enqueue \n");
    printf("3) Dequeue \n");
    printf("4) Peek \n");
    printf("5) Display \n");
    printf("6) Exit \n");

    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        {
            IsEmpty();
            break;
        }
        case 1:
        {
            IsFull();
            break;
        }
        case 2:
        {
            printf("Enter the value to be enqueued : ");
            scanf("%d", &val);
            Enqueue(val);
            break;
        }
        case 3:
        {
            printf("%d ",Dequeue());
            break;
        }
        case 4:
        {
            Peek();
            break;
        }
        case 5:
        {
            Display();

            break;
        }
        case 6:
        {
            printf("Exit \n");
            break;
        }
        default:
        {
            printf("Invalid choice \n");
        }
        }
    } while (ch != 6);
    return 0;
}
