/*Write a menu driven program to implement Deques (Input-
    restricted) operations such as Enqueue, Dequeue,
    Peek, Display of elements, IsEmpty, IsFull using static array.*/


// #include <stdio.h>
// #include<stdlib.h>

int front=0;
int rear=0;
int *arr;

void enqueue()
{
    
    if((rear+1)%5==front)
    {
        if(rear==0)
            rear=5;
        else
            rear--;
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d",&arr[rear]);
        front=0;
        rear=(rear+1)%5;
    }
}
void dequeue()
{
    printf("Enter 1 to dequeue from front\n");
    printf("Enter 2 to dequeue from back\n");
    printf("Enter your choice: ");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        if(rear==0)
            printf("UNDERFLOW\n");
        else
        {
            printf("Element deleted is %d\n",arr[front]);
            arr[front]=0;
            front++;
        }
    }
    else
    {
        if(rear==0)
            printf("UNDERFLOW\n");
        else
        {
            printf("Element deleted is %d\n",arr[--rear]);
            arr[rear]=0;
        }
    }
}
void peek()
{
    if(front==rear+1)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",arr[front]);
    }
}
void display()
{
    int i=0;
    while(i!=rear)
    {
        if(arr[i]!=0)
            printf("%d \n",arr[i]);
        i++;
    }
    
}
void isempty()
{
    if(rear==0)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not empty\n");
}
void isfull()
{
    if(rear==0)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_deques()
{
    arr=(int *)malloc(sizeof(5));
    printf("A input restricted  queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c);

    while(c=='y')
    {
        
        printf("Enter your choice: ");
        int i;
        scanf("%d",&i);
        switch(i)
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
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c);
    }
    return 0;
}