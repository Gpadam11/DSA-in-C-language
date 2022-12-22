#include<stdio.h>

 int main(void)
 {
 	int max;
 	printf("Enter highest order between the polynomials\n");
 	scanf("%d", &max);
 	int a[max], b[max], c[max];
 	printf("Enter coefficients of the polynomial 1\n");
 	for (int i=0; i<=max; i++)
 	{
 		printf("Coefficient for x^%d",(max-i));
 		scanf("%d", &a[i]);
 	}
          printf("Enter coefficients of the polynomial 2\n");
 	for (int i=0; i<=max; i++)
 	{
 		printf("Coefficient for x^%d",(max-i));
 		scanf("%d", &b[i]);
 	}
 	for (int i=0; i<=max; i++)
 	{
 			c[i]=a[i]+b[i];
 	}
 	printf("\n\nPolynomial g(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		
 		if(a[i]>0)
 		printf("+%dx^%d",  a[i] , (max-i));
 		if(a[i]<0)
 		printf("%dx^%d",  a[i] , (max-i));
 		if(a[i]=0)
 		continue;
 
 	}
 	printf("\n\nPolynomial h(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		
 		if(b[i]>0)
 		printf("+%dx^%d",  b[i] , (max-i));
 		if(b[i]<0)
 		printf("%dx^%d",  b[i] , (max-i));
 		if(b[i]=0)
 		continue;
 
 	}
 	
	 printf("\n\nPolynomial f(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		if(c[i]>0)
 		printf("+%dx^%d",  c[i] , (max-i));
 		if(c[i]<0)
 		printf("%dx^%d",  c[i] , (max-i));
 
 	}
}