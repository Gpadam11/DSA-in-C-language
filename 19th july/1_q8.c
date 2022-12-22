#include <stdio.h>
int main()
{
int i,n,x=0,y=0,m=0,l=0,dis=0;
printf("Enter size of array:");
scanf("%d",&n);
int a[n]; 
printf("Enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the two elements x and y:");
scanf("%d %d",&x,&y);
for(i=0;i<n;i++)
{
if(a[i]==x)
m=i;
if(a[i]==y)
l=i;
if(m>l)
dis=m-l;
else
dis=l-m;
}
printf("The distance between the two elements:%d",dis);
}