//WAP to finf the depth and height of a tree.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node *create(struct node *root)
{
    struct node *temp;
    int num;
    printf("Enter the data (-1 to exit): ");
    scanf("%d", &num);
    if (num == -1)
    {
        return root;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        if (num < root->data)
        {
            root->left = create(root->left);
        }
        else
        {
            root->right = create(root->right);
        }
    }
    return root;
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int height(struct node *root)
{
    int x = 0, y = 0;
    if (root == NULL)
    {
        return 0;
    }
    x = height(root->left);
    y = height(root->right);
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}

int depth(struct node *root)
{
    int x = 0, y = 0;
    if (root == NULL)
    {
        return 0;
    }
    x = depth(root->left);
    y = depth(root->right);
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}

int main()
{
    root = create(root);
    printf("Inorder traversal is: ");
    inorder(root);
    printf("  ");

    printf("Height of the tree is: %d", height(root));
    printf("Depth of the tree is: %d", depth(root));
    return 0;
}

