//Write a menu program for the binary search tree operations such as quit,create,in order traversal, pre order traversal, post order traversal, search, find smallest element, find largest element, deletion of tree. 
// #include <stdio.h>
// #include<stdlib.h>
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
    printf("%d\n", root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}
struct node *search(struct node *root, int num)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == num)
    {
        return root;
    }
    else if (num < root->data)
    {
        return search(root->left, num);
    }
    else
    {
        return search(root->right, num);
    }
}
struct node *findSmallest(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left == NULL)
    {
        return root;
    }
    else
    {
        return findSmallest(root->left);
    }
}
struct node *findLargest(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->right == NULL)
    {
        return root;
    }
    else
    {
        return findLargest(root->right);
    }
}
struct node *deleteNode(struct node *root, int num)
{
    struct node *temp;
    if (root == NULL)
    {
        return NULL;
    }
    else if (num < root->data)
    {
        root->left = deleteNode(root->left, num);
    }
    else if (num > root->data)
    {
        root->right = deleteNode(root->right, num);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            temp = findSmallest(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
void deleteTree(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}
int main_bst()
{
    int choice, num;
    while (1)
    {
        printf("\n1. Create\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search\n");
        printf("6. Find Smallest\n");
        printf("7. Find Largest\n");
        printf("8. Delete Node\n");
        printf("9. Delete Tree\n");
        printf("10. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            root = create(root);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("Enter the element to be searched: ");
            scanf("%d", &num);
            if (search(root, num) == NULL)
            {
                printf("Element not found\n");
            }
            else
            {
                printf("Element found\n");
            }
            break;
        case 6:
            if (findSmallest(root) == NULL)
            {
                printf("Tree is empty\n");
            }
            else
            {
                printf("Smallest element is %d\n", findSmallest(root)->data);
            }
            break;
        case 7:
            if (findLargest(root) == NULL)
            {
                printf("Tree is empty\n");
            }
            else
            {
                printf("Largest element is %d\n", findLargest(root)->data);
            }
            break;
        case 8:
            printf("Enter the element to be deleted: ");
            scanf("%d", &num);
            if (search(root, num) == NULL)
            {
                printf("Element not found\n");
            }
            else
            {
                root = deleteNode(root, num);
                printf("Element deleted\n");
            }
            break;
        case 9:
            deleteTree(root);
            root = NULL;
            printf("Tree deleted\n");
            break;
        case 10:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
