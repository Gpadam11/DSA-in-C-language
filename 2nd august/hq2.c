#include <stdio.h>
#include <stdlib.h>
void main()
{
int n,*arr;
printf("Enter the value of n \n");
scanf("%d",&n);
arr=(int *)malloc(n * sizeof(int));
printf("Enter the elements of array arr \n");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
for (int i = 0; i < n-1; i++)
{
int min = i;
for (int j = i+1; j < n; j++)
if (arr[j] < arr[min])
min = j;
int temp = arr[min];
arr[min] = arr[i];
arr[i] = temp;
}
for (int i = 0; i < n-1; i++)
{
for (int j = i+1; j < n; j++)
{
if (arr[j]%2==0 && arr[i]%2!=0)
{
int temp = arr[j];
arr[j] = arr[i];
arr[i] = temp;
break;
}
}
}
printf("The arranged array is \n");
for( int i=0;i<n;i++)
printf("%d ",arr[i]);
}