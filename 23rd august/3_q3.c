// WAP to check whether the given matrix is sparse matrix or not.

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, m, i, j, max, temp, c = 0;
	printf("Enter the order of matrix\n");
	scanf("%d %d", &m, &n);
	int *arr = (int *)malloc((m * n) * sizeof(int));
	max = m * n;
	printf("Enter the elements\n");
	for (i = 0; i < max; i++)
	{
		scanf("%d", &arr[i]);
	}

	temp = max / 2;
	for (i = 0; i < max; i++)
	{
		if (arr[i] == 0)
			c++;
	}
	if (temp < c)
		printf("Sparse matrix");
	else
		printf("Not a Sparse matrix");
}


// WAP to check whether the given matrix is sparse matrix or not.

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, m, i, j, max, temp, c = 0;
	printf("Enter the order of matrix\n");
	scanf("%d %d", &m, &n);
	int *arr = (int *)malloc((m * n) * sizeof(int));
	max = m * n;
	printf("Enter the elements\n");
	for (i = 0; i < max; i++)
	{
		scanf("%d", arr+i);
	}

	temp = max / 2;
	for (i = 0; i < max; i++)
	{
		if (*(arr+i) == 0)
			c++;
	}
	if (temp < c)
		printf("Sparse matrix");
	else
		printf("Not a Sparse matrix");
}*/