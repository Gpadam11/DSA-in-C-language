
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
   // struct node *head;
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

struct node *insertAtFirst(struct node *head, struct node *newnode)
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

struct node *insertAtEnd(struct node *head, struct node *newnode)
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

struct node *insertAtPos(struct node *head, struct node *newnode, int pos)
{
    int i;
    if (pos == 1)
    {
        newnode->link = head;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->link;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
    return head;
}

struct node *deletetAtFirst(struct node *head)
{
    if (head == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}

struct node *deletetAtEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("The linked list is empty\n");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        /* while (temp->link->link != NULL)
         {
             temp = temp->link;
         }*/

        for (temp = head; temp->link->link != NULL; temp = temp->link)
            ;

        temp->link = NULL;
        free(temp->link);
    }
    return head;
}

struct node *deleteAtPos(struct node *head, int pos)
{
    if (pos == 1)
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        struct node *temp = head;
        int i;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->link;
        }
        struct node *temp2 = temp->link;
        temp->link = temp2->link;
        free(temp2);
    }
    return head;
}

struct node *deletekey(struct node *head, int key)
{
    if (head == NULL)
    {
        printf("The linked list is empty\n");
    }
    else if (head->info == key)
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        struct node *temp = head;

        for (temp = head; temp->link->info != key; temp = temp->link)
            ;

        if (temp->link == NULL)
        {
            printf("The key is not found\n");
        }
        else
        {
            struct node *temp2 = temp->link;
            temp->link = temp2->link;
            free(temp2);
        }
    }
    return head;
}

void countNodes(struct node *head)
{
    struct node *temp=head;
    int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->link;
    
     }
     printf("no of nodes=%d", count);
}

void search(struct node *temp, int key)
{
    int flag = 0;
    if (temp==NULL)                                                                                                                                                 
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

    int choice;
    do
    {

        printf("\nEnter-\n");
        printf("1.Linked list before Insersion\n2.Insert a node at beginning\n3.Insert a node at end\n4.Insert a node at any position\n5.Delete a node at beginning\n6.Delete a node at end\n7.Delete a node at any position\n8.Delete a node for a given key\n9.Count the total no. of nodes\n10. Search for an element in the linked list\n11.Exit\n");
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
            printf("\nEnter the new node info:");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info);
            head = insertAtFirst(head, newnode);
            linkedlistTraversal(head);
            break;
        }

        case 3:
        {
            struct node *newnode;
            printf("\nEnter the new node info:");
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
            printf("\nEnter position at which node is to be added:");
            scanf("%d", &pos);
            printf("\nEnter the new node info:");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info);
            head = insertAtPos(head, newnode, pos);
            linkedlistTraversal(head);
            break;
        }

        case 5:
        {
            head = deletetAtFirst(head);
            linkedlistTraversal(head);
            break;
        }
        case 6:
        {
            head = deletetAtEnd(head);
            linkedlistTraversal(head);
            break;
        }

        case 7:
        {
            int pos;
            printf("\nEnter position at which node is to be deleted:");
            scanf("%d", &pos);
            head = deleteAtPos(head, pos);
            linkedlistTraversal(head);
            break;
        }

        case 8:
        {
            int key;
            printf("\nEnter the key to be deleted:");
            scanf("%d", &key);
            head = deletekey(head, key);
            linkedlistTraversal(head);

            break;
        }
        case 9:
        {
            countNodes(head);
            break;
        }

        case 10:
        {
            int key;
            printf("\nEnter the element you want to search:");
            scanf("%d", &key);
            search(head, key);
            break;
        }
        case 11:
        {
            printf("\nExiting the program\n");
            break;
        }

        default:
            printf("\nInvalid choice\n");
        }
    } while (choice >= 1 && choice <= 10);
}