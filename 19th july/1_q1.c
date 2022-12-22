#include <stdio.h>
int main()
{
int temp=0,i,j,n;
printf("Enter the no of elements");
scanf("%d",&n);
int a[n];
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("largest element=%d\n",a[n-1]);
printf("smallest element=%d",a[0]);
return 0;
}

