#include <stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(void)
 {
 	int *ptr;
 	int n,x,  sum=0;
 	printf("Enter order of the polynomial");
 	scanf("%d", &n);
 	printf("Enter value of x");
 	scanf ("%d", &x);
 	ptr=(int *)malloc((n+1)*sizeof(int));
 	printf("Enter coefficients of the polynomial\n");
 	for (int i=0; i<=n; i++)
 	{
 		scanf("%d", &ptr[i]);
 	}
 	for(int i=0; i<=n; i++)
 	{
 		sum=sum+(ptr[i]*pow(x, (n-i)));
 	}
 	
 	printf("Polynomial: \n");
 	for (int i=0; i<=n; ++i)
 	{
 		if(ptr[i]>0)
 		printf("+%dx^%d",  ptr[i] , (n-i));
 		if(ptr[i]<0)
 		printf("%dx^%d",  ptr[i] , (n-i));
 
 	}
 	printf("\nSum of all the elements: %d", sum);
 	free(ptr);
 	return 0;
 }