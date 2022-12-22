//WAP to read an array of integers and search for an element using binary search.

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
    int low=0;
    int high=n-1;
    while(low<=high) 
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            flag=1;
            break;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}