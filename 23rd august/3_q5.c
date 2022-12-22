// WAP to find determinant of 3×3 Matrix.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,det;
 int (*a)[3] = calloc(3, sizeof *a);
printf("Enter the elements of the 3X3 matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("ORIGINAL MATRIX:\n");                   
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]- a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
printf("Determinant of the matrix is %d", det);
return 0;
}