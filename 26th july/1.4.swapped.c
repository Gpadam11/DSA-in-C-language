#include <stdio.h>
int main()
{
int m,n;
printf("Enter row and coloumn : ");
scanf("%d%d",&m,&n);
int a[m][n];
int i,j;
printf("Enter the array : \n");
for (i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d",&a[i][j]);
}
}
int b[m][n];
printf("Original matrix:\n");
for (i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
int t;
/*for (i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
    t=a[i][j];
a[i][j]=a[i][n--];
a[i][n--]=t;
}
}*/

 for ( i = 0; i < m; i++) {
    
    for(j=0; j<n;j++)
    {
        b[i][j] = a[i][n-j-1];    
    }
    
    }
printf("Swapped matrix:\n");

for (i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}

return 0;
}