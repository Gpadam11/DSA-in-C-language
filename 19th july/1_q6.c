//WAP to find the next greater integer
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of array a \n");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The next greater numbers for each element in the array is \n");

    for(int i=0;i<n;i++)
    {
        if( i<n-1) 
        {
            if(a[i]<a[i+1])
                printf("for element %d the next greater elemennt is %d \n",a[i],a[i+1]);
            else
                printf("for element %d the next greater elemennt is -1 \n",a[i]); 
        }

        else
            printf("for element %d the next greater elemennt is -1 \n",a[i]);
    }
}