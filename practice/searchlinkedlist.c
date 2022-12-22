// wap to create two linkedlist containing input string and query string. find out for each query string how many times it appears in the list of input string. return a linked listt containing the search results in its each node.

#include <stdio.h>
#include <stdlib.h>

struct node1
{
    char string;
    struct node1 *link1;
    struct node1 *head1;
};
struct node2
{
    char query;
    struct node2 *link2;
    struct node2 *head2;
};
struct node3
{
    int info;
    struct node3 *link3;
    struct node3 *head3;
};

struct node3 *search(struct node1 *head1, struct node2 *head2, struct node3 *head3)
{
    struct node1 *temp1 = head1;
    struct node2 *temp2 = head2;
    struct node3 *temp3 = head3;
    int count = 0;
    while (temp2 != NULL)
    {
        while (temp1 != NULL)
        {
            if (temp2->query == temp1->string)
            {
                count++;
            }
            temp1 = temp1->link1;
        }
        temp3->info = count;
        temp2 = temp2->link2;
        temp3 = temp3->link3;
    }
    return head3;
}

int main()
{
    struct node1 *h1 = NULL;
    struct node1 *h2 = NULL;
    struct node1 *h3 = NULL;
    struct node2 *h21 = NULL;
    struct node2 *h22 = NULL;
    struct node2 *h23 = NULL;
    struct node3 *h31 = NULL;
    struct node3 *h32 = NULL;
    struct node3 *h33 = NULL;
    h1=(struct node1*)malloc(sizeof(struct node1));
    h2=(struct node1*)malloc(sizeof(struct node1));
    h3=(struct node1*)malloc(sizeof(struct node1));
    h21=(struct node2*)malloc(sizeof(struct node2));
    h22=(struct node2*)malloc(sizeof(struct node2));
    h23=(struct node2*)malloc(sizeof(struct node2));
    h31=(struct node3*)malloc(sizeof(struct node3));
    h32=(struct node3*)malloc(sizeof(struct node3));
    h33=(struct node3*)malloc(sizeof(struct node3));
    h1->string = 'a';
    h2->string = 'd';
    h3->string = 'a';
    h21->query = 'a';
    h22->query = 'b';
    h23->query = 'c';
    h1->link1 = h2;
    h2->link1 = h3;
    h3->link1 = NULL;
    h21->link2 = h22;
    h22->link2 = h23;
    h23->link2 = NULL;
    h31->link3 = h32;
    h32->link3 = h33;
    h33->link3 = NULL;
    search(h1, h21, h31);
    printf("%d", h31->info);
    printf("%d", h32->info);
    printf("%d", h33->info);
    return 0;
}