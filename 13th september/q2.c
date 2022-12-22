//WAP to reverse the sequence elements in a double linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node;

void create(node *head)
{
    scanf("%d",&head ->data);//enter the data

    if(head->data==-999) 
    {
        head->next=NULL;
        head->prev =head;//the last node points to itself
    }
    else
    {
        head->next = (node *)malloc(sizeof(node)); //creating a new node
        head->next->prev =head; //linking the previous node to the new node
        create(head->next);//calling the function again
    }
}

void display(node *head)
{
    if(head->next!=NULL)
    {
        display(head->next);
        printf("%d \n",head->data);
    }
}
void main()
{
    node *head=(node*)malloc(sizeof(node));
    head->prev=NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create(head);
    printf("The list  is \n");
    display(head);
}