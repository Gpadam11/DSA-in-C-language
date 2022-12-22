/*  WAP    to find the following using user defined functions
1. the number of nonzero elements in the given matrix
2. the sum of element above the leading diagonal
3. the elements below the minor diagonal
4. the product of the diagonal elements
*/

#include <stdio.h>

void count(int n,int arr[n][n] )
{
    int c=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(arr[i][j]!=0)
                c++;
    
    printf("The number of non zero elements in the matrix is %d \n",c);
}

void sum(int n,int arr[n][n] )
{
    int s=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(j>i)
               s=s+arr[j][i];

    printf("THe sum of element above the leading diagonal is %d \n",s);
}

void element(int n,int arr[n][n] )
{
    printf("The elements below the lower diagonal are as  follows \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            printf("  ");
        }
        for(int j=n-1;j>n-i-1;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void product(int n,int arr[n][n] )
{
    int p=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                p=p*arr[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(j==(n-1-i))
                p=p*arr[i][j];

    printf("The product of the elements of the diagonals is %d \n",p);
}

void main()
{
    int n;
    printf("Enter the size of matrix \n");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter the elements of matrix a \n");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    
    printf("The elements are ");
    for(int i=0;i<n;i++)
     {   for(int j=0;j<n;j++)
            printf("%d",a[i][j]);
        printf(" \n");
     }
    
    int k;
    printf("Enter 1 to the number of nonzero elements in the given matrix \n ");
    printf("Enter 2 to the sum of element above the leading diagonal \n ");
    printf("Enter 3 the elements below the minor diagonal \n ");
    printf("Enter 4 the product of the diagonal elements \n ");
    scanf("%d",&k);

    switch(k)
    {
    
    case 1:
    {
        count(n,a);
        break;
    }
    case 2:
    {
        sum(n,a);
        break;
    }
    case 3:
    {
        element(n,a);
        break;
    }
    case 4:
    {
        product(n,a);
        break;
    }
    default:
        printf("Wrong option");
    }
}