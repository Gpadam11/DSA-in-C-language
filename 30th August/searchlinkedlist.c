//Search for an element in the linked list.

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

void search(struct node *temp, int key)
{
    int flag = 0;
    if (temp == NULL)
    {
        printf("\nThe linked list is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->info == key)
            {
                flag = 1;
                break;
            }
            temp = temp->link;
        }
        if (flag == 1)
        {
            printf("\nElement found\n");
        }
        else
        {
            printf("\nElement not found\n");
        }
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
    
    int key;
    printf("\nEnter the element you want to search");
    scanf("%d", &key);
    search(head, key);
}