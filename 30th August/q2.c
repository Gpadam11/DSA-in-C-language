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
            printf("%d\n", temp->info);
            temp = temp->link;
        }
    }
}

void linkedlistReversal(struct node *temp)
{
    
    if (temp == NULL)
    {
        return;
    }
    else
    {
       linkedlistReversal(temp->link);
         printf("%d\n", temp->info);
    }
}

int main(void)
{

    struct node *head = NULL;

    // CREATING n NUMBER OF NODES

    struct node *M = NULL;
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
    }
    printf("\nElements in linked list are:\n");
    linkedlistTraversal(head);
    printf("\nElements in linked list in reverse order:\n");
    linkedlistReversal(head);
}