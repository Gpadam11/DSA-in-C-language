//wap to implement double linked list using single linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
typedef struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
}dnode;
void create(node *head)
{
    scanf("%d",&head ->data);
    if(head->data==-999)
    {
        head->next=NULL;
    }
    else
    {
        head->next = (node *)malloc(sizeof(node));
        create(head->next);
    }
}
void display(node *head)
{
    if(head->next!=NULL)
    {
        printf("%d \t",head->data);
        display(head->next);
    }
}
void dcreate(dnode *dhead,node *head)
{
    dhead->data=head->data;
    if(head->next!=NULL)
    {
        dhead->next=(dnode *)malloc(sizeof(dnode));
        dhead->next->prev=dhead;
        dcreate(dhead->next,head->next);
    }
    else
    {
        dhead->next=NULL;
    }
}
void ddisplay(dnode *dhead)
{
    if(dhead->next!=NULL)
    {
        printf("%d \t",dhead->data);
        ddisplay(dhead->next);
    }
}
void main()
{
    node *head=(node *)malloc(sizeof(node));
    dnode *dhead=(dnode *)malloc(sizeof(dnode));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create(head);
    printf("The list  is \n");
    display(head);
    dcreate(dhead,head);
    printf("The double linked list is \n");
    ddisplay(dhead);
}