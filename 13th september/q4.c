//WAP to remove the duplicaties in a sorted double linked list.

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
    scanf("%d",&head ->data);

    if(head->data==-999)
    {
        head->next=NULL;
        head->prev =head;
    }
    else
    {
        head->next = (node *)malloc(sizeof(node));
        head->next->prev =head;
        create(head->next);
    }
}

void search(node *list,int dat)
{
    int c=0;
    while(list->next!=NULL)
    {
        if(list->data==dat)
            c++;
            list=list->next;
    }
        printf("The element %d is found in the list %d times. \n",dat,c);
    
}


void main()
{
    node *head=malloc(sizeof(node));
    head->prev=NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create(head);
    node *temp=head;
    while(temp->next!=NULL)
    {
            search(head,temp->data);
            temp=temp->next;
    }
}