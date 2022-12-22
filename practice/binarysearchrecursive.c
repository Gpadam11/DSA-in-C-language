//WAP to perform binary searching using recursion.

#include <stdio.h>
#include <stdlib.h>

int search(int a[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] > key)
    {
        return search(a, low, mid - 1, key);
    }
    else
    {
        return search(a, mid + 1, high, key);
    }
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
    int pos = search(a, 0, n - 1, key);
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
