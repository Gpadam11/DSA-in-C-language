#include <stdio.h>
#include<stdlib.h>
 int main(void)
 {
 	int *ptr;
 	int n, sum=0;
 	printf("Enter size of the array");
 	scanf("%d", &n);
 	ptr=(int *)malloc(n*sizeof(int));
 	for (int i=0; i<n; i++)
 	{
 		printf("Enter element %d of this array\n", i+1);
 		scanf("%d", &ptr[i]);
 		sum=sum+ ptr[i];
 	}
 	printf("Array: \n");
 	for (int i=0; i<n; i++)
 	{
 		printf("%d",  ptr[i]);
 
 	}
 	printf("\nSum of all the elements: %d", sum);
 	free(ptr);
 	return 0;
 }