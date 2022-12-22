#include <stdio.h>
int max(int a, int b)
{
return a>b?a:b ;
}
int getMax(int A[], int n)
{
if (n == 1)
return A[0];
return max(A[n-1], getMax(A, n-1));
}
int main()
{
int arr[] = { 5, 1, 9, 2, 4};
int n = sizeof(arr)/sizeof(arr[0]);
printf("Largest in given array is %d", getMax(arr, n));
return 0;
}