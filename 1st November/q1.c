//WAP to read an array of integers and search for an element using linear search.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter the element to be searched");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at position %d",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}