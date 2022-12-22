//insert a node at end

#include<stdio.h>
#include<stdlib.h>
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
       while (temp->link != NULL)
            temp = temp->link;
        temp->link = newnode;

    }
    return head;
}
int main()
{
    struct node *head = NULL;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted at first: ");
    scanf("%d", &newnode->info);
    head = insertAtFirst(head, newnode);
    linkedlistTraversal(head);
    printf("\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted at end: ");
    scanf("%d", &newnode->info);
    head = insertAtEnd(head, newnode);
    linkedlistTraversal(head);
    return 0;
}