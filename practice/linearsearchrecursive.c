//WAP to perform linear searching using recursion.

#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }
    return search(a, n, key, i + 1);
}

int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the element to be searched");
    scanf("%d", &key);
    int pos = search(a, n, key, 0);
    if (pos == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d", pos + 1);
    }
    return 0;
}
