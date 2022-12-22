#include <stdio.h>
int main()
{
int i,n,k=0;
printf("Enter the no of elements");
scanf("%d",&n);
int a[n];
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int b[n];
for(i=n-1;i>=0;i--)
{
    b[i]=a[k];
    k++;
}
for(i=0;i<n;i++)
{
    a[i]=b[i];
}
printf("reversed array : ");
for(i=0;i<n;i++){
printf("%d\t", a[i]);
}
}