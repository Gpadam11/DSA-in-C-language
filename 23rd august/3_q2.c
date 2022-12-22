// WAP using function that adds given two polynomials f(x) = h(x) + g(x)

#include<stdio.h>
#include<stdlib.h>
 int main(void)
 {
 	int max;
 	printf("Enter highest order between the polynomials\n");
 	scanf("%d", &max);
 	int a[max], b[max], c[max];
	int *gx=(int *)malloc((max+1)*sizeof(int));
	int *hx=(int *)malloc((max+1)*sizeof(int));
	int *fx=(int *)malloc((max+1)*sizeof(int));
 	printf("Enter coefficients of the polynomial 1\n");
 	for (int i=0; i<=max; i++)
 	{
 		printf("Coefficient for x^%d",(max-i));
 		scanf("%d", &gx[i]);
 	}
          printf("Enter coefficients of the polynomial 2\n");
 	for (int i=0; i<=max; i++)
 	{
 		printf("Coefficient for x^%d",(max-i));
 		scanf("%d", &hx[i]);
 	}
 	for (int i=0; i<=max; i++)
 	{
 			fx[i]=gx[i]+hx[i];
 	}
 	printf("\n\nPolynomial g(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		
 		if(gx[i]>0)
 		printf("+%dx^%d",  gx[i] , (max-i));
 		if(gx[i]<0)
 		printf("%dx^%d",  gx[i] , (max-i));
 		if(gx[i]=0)
 		continue;
 
 	}
 	printf("\n\nPolynomial h(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		
 		if(hx[i]>0)
 		printf("+%dx^%d",  hx[i] , (max-i));
 		if(hx[i]<0)
 		printf("%dx^%d",  hx[i] , (max-i));
 		if(hx[i]=0)
 		continue;
 
 	}
 	
	 printf("\n\nPolynomial f(x): \n");
 	for (int i=0; i<=max; i++)
 	{
 		if(fx[i]>0)
 		printf("+%dx^%d",  fx[i] , (max-i));
 		if(fx[i]<0)
 		printf("%dx^%d",  fx[i] , (max-i));
 
 	}
}