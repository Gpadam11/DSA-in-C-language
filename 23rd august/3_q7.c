// WAP using function to find frequency of occurrence of numbers in an array.
#include <stdio.h>
#include <stdlib.h>
void input(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
}
    int freq(int *p, int n, int c, int d)
    {
        if (n < 0)
            return c;
        else
        {
            if (d == *p)
                c++;
            freq(++p, --n, c, d);
        }
    }

void main()
{
    int n;
    int *arr;
    printf("Enter the length of array ");
    scanf("%d", &n);
    arr = (int *)malloc((n) * sizeof(int));
    printf("Enter the elements of the array \n");
    input(arr, n);
    printf("The of the elements of the array are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t %d \n", *(arr + i), freq(arr, n, 0, arr[i]));
    }
}
