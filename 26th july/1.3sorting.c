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
       for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[j]%2==0 && a[i]%2!=0)
                {int temp = a[j];
                 a[j] = a[i];
                a[i] = temp;
                break;
                }    
            }
        }
    printf("The sorted array is \n");
    for( int i=0;i<n;i++)
        printf("%d ",a[i]);
}