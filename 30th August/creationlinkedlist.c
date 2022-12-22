#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
      struct node *head;
};


struct node *creation(struct node *head)
{
    //struct node *head = NULL;

    // CREATING n NUMBER OF NODES

    struct node *M=NULL;
    struct node *N=NULL;
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
    return head;

}


void traversal(struct node *head)
{
    if (head == NULL)
    {
        printf("\nThe linked list is empty\n");
    }
    else
    {
         while (head != NULL)
        {
            printf("%d\n", head->info);
            head = head->link;
        }
    }
}

int main()
{
    struct node *head = NULL;
   head= creation(head);
   traversal(head);
    //return head;
    
}