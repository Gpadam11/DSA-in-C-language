#include <stdio.h>

 int main(void)
 {
 	int n,m,i,j;
 	printf("Enter the order of matrix\n");
 	scanf("%d %d", &m, &n);
 	int arr[m][n], trans[n][m];
 	printf("Enter the elements\n");
 	for(i=0; i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d", &arr[i][j]);
 		}
 	}
 	 	printf("Original matrix:\n");
 	for(i=0; i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ", arr[i][j]);
 		}
 		printf("\n");
 	}
 	printf("Transpose matrix:\n");
 	for(i=0; i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			trans[i][j]=arr[j][i];
 			printf("%d ", trans[i][j]);
 		}
 		printf("\n");
 	}
 	
 	return 0;
 }