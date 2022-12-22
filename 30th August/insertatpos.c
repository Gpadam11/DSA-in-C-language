//linkedlist to insert a node at any position with user input and for loop

#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *newnode=NULL;
    int i=0,n=0,pos=0;
    printf("Enter the number of nodes you want to create");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node %d",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("Enter the position where you want to insert the node");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Invalid position");
    }
    else
    {
        temp=head;
        for(i=1;i<pos;i++)
        {
            temp=temp->next;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for the new node");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}
