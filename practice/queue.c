#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *s;
};

void enqueue(struct queue *st, int val)
{
    if (st->rear==st->size-1)
    {
        printf("\nThe queue is FULL.\n");
    }
    else
    {
        st->rear++;
        st->s[st->rear]=val;
        printf("\nThe enqueued value is : %d", val);
    }
}

void dequeue(struct queue *st)
{
    if (st->rear==st->front)
    {
        printf("\nThe queue is Empty.\n");
    }
    else
    {
        st->front++;
        printf("\nThe dequeued value is : %d", st->s[st->front]);
    }
}

int isFull(struct queue *st)
{
    if (st->rear==st->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *st)
{
    if (st->front==st->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display(struct queue *st)
{
    for (int i=st->front;i<=st->rear;i++)
    {
        printf("%d\t", st->s[i]);
    }
}

int main()
{
    struct queue *st;
    int n, x;
    st->front=-1;
    st->rear=-1;
    printf("\nEnter the size of the queue: ");
    scanf("%d",&st->size);
    st->s=(int*)malloc(st->size*sizeof(int));
    printf("\nEnter the number of elements you want to fill in the queue now: ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(st,x);
    }

    printf("\nThe given queue:\n");
    display(st);

    dequeue(st);
    printf("\nAfter dequeueing: \n");
    display(st);
    return 0;
}