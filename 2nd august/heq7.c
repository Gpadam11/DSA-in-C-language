#include <stdio.h>
#include <stdlib.h>
void input(int *p,int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&p[i*n+j]);
}
}
void output(int *p,int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
printf("%d ",p[i*n+j]);
printf("\n");
}
}
int lower(int *p,int r)
{
for(int i=0;i<r;i++)
{
for(int j=i;j<(i+(i*r));j++)
{
if(*(p+i+j)==0)
return 1;
else
{
return 0;
break;
}
}
}
}
int upper(int *p,int r)
{
for(int i=0;i<r;i++)
{
for(int j=(i+(i*r));j<(i+((r*r)-r+1));j++)
{
if(*(p+i+j)==0)
return 1;
else
{
return 0;
break;
}
}
}
}
int tri(int *p,int r)
{
for(int i=0;i<r;i++)
{
if(*(p+i+i)==0)
return 1;
else
{
return 0;
break;
}
i=(i*r);
}
}
void main()
{
int n;
int *arr;
printf("Enter the length of sqaure matrix ");
scanf("%d",&n);
arr=(int *) malloc((n*n) * sizeof(int));
printf("Enter the elements of the array \n");
input(arr,n);
printf("The matrix is \n");
output(arr,n);
if(lower(arr,n)==1)
printf("The matrix is lower triangular matrix");
else if(upper(arr,n)==1)
printf("The matri is upper triangular matrix");
else if(tri(arr,n==1))
printf("The matrix is tri-diagonal matrix");
else
printf("The matrix is neither lower triangular neither upper triangular nor tri diagonal matrix");
}