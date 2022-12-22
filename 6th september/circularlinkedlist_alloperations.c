// WAP to create a circular linked list and print the elements of the list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
    struct node *last;
};
struct node *create_circularLinkedlist(struct node *head)
{
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
            // N->link = NULL;
            head = N;
        }
        else
        {
            M = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter the value to be kept in %d node", i + 1);
            scanf("%d", &M->info);
            N->link = M;
            N = M;
        }
    }
    struct node *last;
    M->link = head;
    last = M;
    struct node *temp;
    /*for(temp=head; temp!=last; temp=temp->link)
    {
        printf("%d ", temp->info);
    }
        printf("%d ", last->info);
        printf("%d ", last->link->info);*/
    return head;
}

void linkedlistTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d\n", ptr->info);
        ptr = ptr->link;
    } while (ptr != head);

    // printf("%d ", last->info);
    printf("%d ", ptr->info);
}

struct node *insertAtFirst(struct node *head, struct node *newnode)
{
    // insert at the beginning in the circular linked list
    struct node *p = head->link;
    while (p->link != head)
    {
        p = p->link;
    }
    // At this point p points to the last node of this circular linked list
    p->link = newnode;
    newnode->link = head;
    head = newnode;
    return head;
}

struct node *insertAtEnd(struct node *head, struct node *newnode)
{
    // insert at the end in the circular linked list
    struct node *p = head;
    while (p->link != head)
    {
        p = p->link;
    }
    p->link = newnode;
    newnode->link = head;
    return head;
}

struct node *insertAtPos(struct node *head, struct node *newnode, int pos)
{
    int i;
    if (pos == 1)
    {
        head = insertAtFirst(head, newnode);
        return head;
    }
    struct node *p = head;
    for (i = 1; i < pos - 1; i++)
    {
        p = p->link;
    }
    newnode->link = p->link;
    p->link = newnode;
    return head;
}

struct node *deletetAtFirst(struct node *head)
{
    // delete at the beginning in the circular linked list
    struct node *p = head;
    struct node *q;
    while (p->link != head)
    {
        p = p->link;
    }
    q = head;
    head = head->link;
    p->link = head;
    free(q);
    return head;
}

struct node *deletetAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->link;
    while (q->link != head)
    {
        p = p->link;
        q = q->link;
    }
    p->link = head;
    free(q);
    return head;
}

struct node *deleteAtPos(struct node *head, int pos)
{
    if (pos == 1)
    {
        head = deletetAtFirst(head);
        return head;
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
    struct node *p = head;
    struct node *q = head->link;
    if(p->info==key)
    {
        head = deletetAtFirst(head);
        return head;
    }
    
    while (q->info != key && q->link != head)
    {
        p = p->link;
        q = q->link;
    }
    if (q->info == key)
    {
        p->link = q->link;
        free(q);
    }
    return head;
}

void countNodes(struct node *head)
{
    struct node *p = head;
    int count = 0;
    do
    {
        count++;
        p = p->link;
    } while (p != head);
    printf("no of nodes=%d", count);
}

void search(struct node *temp, int key)
{
    int i = 1;
    while (temp->info != key)
    {
        temp = temp->link;
        i++;
    }
    printf("key found at %d position", i);
}

int main(void)
{

    struct node *head = NULL;

    // CREATING n NUMBER OF NODES

    struct node *M = NULL;
    struct node *N = NULL;
    int num_nodes_460, i;
    head = create_circularLinkedlist(head);

    int choice;
    do
    {

        printf("\nCircular Linked List-\n");
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
