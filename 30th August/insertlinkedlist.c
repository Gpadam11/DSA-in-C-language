
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
    struct node *head;
};

void linkedlistTraversal(struct node *temp)
{
    if (temp == NULL)
    {
        printf("\nThe linked list is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Elements: %d\n", temp->info);
            temp = temp->link;
        }
    }
}

struct node *insertAtFirst(struct node *head, int info)
{
    if (head == NULL)
    {
        newnode->link = NULL;
        head = newnode;
    }
    else
    {
        newnode->link = head;
        head = newnode;
    }
    return head;
}

struct node *insertAtEnd(struct node *head, int info)
{
    newnode->link = NULL;
    struct node *temp = head;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        for (temp = head; temp->link != NULL; temp = temp->link)
            ;
        temp->link = newnode;
    }
    return head;
}

struct node *insertAtPos(struct node *head, int info, int pos)
{
    newnode->link = NULL;
    struct node *temp=head;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        int i, pos;
        /*for (i = 1; i <=pos - 1; i++, temp = temp->link)
            ;
            
        newnode->link= temp->link;
        //temp->link = newnode;
        temp=newnode;*/

        temp=head;
        for(i=1;i<pos;i++)
        {
            temp=temp->link;
        }
        newnode->link=temp->link;
        temp->link=newnode;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp=temp->link;
    }
    }
    return head;
}

int main(void)
{

    struct node *head = NULL;
    /*struct node *M = NULL;
    struct node *N = NULL;
    int num_nodes, i;
    printf("Enter the no. of nodes you want to create");
    scanf("%d", &num_nodes);
    for (i = 0; i < num_nodes; i++)
    {
        if (head == NULL)
        {
            N = (struct node *)malloc(sizeof(struct node));
            printf("\n List is empty");
            printf("\n Enter the value to be kept at 1st node");
            scanf("%d", &N->info);
            N->link = NULL;
            head = N;
        }
        else
        {
            M = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter the value to be kept in %d node", i + 1);
            scanf("%d", &M->info);
            M->link = NULL;
            N->link = M;
            N = M;
        }
    }*/

    int choice;
    do
    {

        printf("\nEnter-\n");
        printf("1.Linked list before Insersion\n2.Insert a node at beginning\n3.Insert a node at end\n4.Insert a node at any position\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            linkedlistTraversal(head);
            break;
        }
        case 2:
        {
            struct node *newnode;
            printf("\nEnter the new node info");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info);
            head = insertAtFirst(head, info);
            linkedlistTraversal(head);
            break;
        }
        case 3:
        {
            struct node *newnode;
            printf("\nEnter the new node info");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info);
            head = insertAtEnd(head, newnode);
            linkedlistTraversal(head);
            break;
        }
        case 4:
        {
            struct node *newnode;
            int pos;
            printf("\nEnter position at which node is to be added");
            scanf("%d", &pos);
            printf("\nEnter the new node info");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info);
            head = insertAtPos(head, newnode, pos);
            linkedlistTraversal(head);
            break;
        }
        case 5:
        {
            printf("\nExiting");
            break;
        }
        default:
        {
            printf("\nInvalid choice");
            break;
        }
        }
    } while (choice != 5);
    return 0;
}
