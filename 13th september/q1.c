//Double linked list creation and display

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;

node *create(node *head)
{
    head = NULL;
    node *M = NULL;
    node *N = NULL;
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
            scanf("%d", &N->data);
            N->prev = NULL;
            N->next = NULL;
            head = N;
        }
        else
        {
            M = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter the value to be kept in %d node", i + 1);
            scanf("%d", &M->data);
            M->next = NULL;
            N->next = M;
            M->prev = N;
            N = M;
        }
    }
    return head;
}

node *display(node *head)
{
    node *ptr = head;
    printf("The list is: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return head;
}
int main()
{
    node *head = NULL;
    head = create(head);
    head = display(head);
    return 0;
}
