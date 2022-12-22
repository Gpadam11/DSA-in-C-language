#include <stdio.h>
int main()
{
int k=0,i,j,n,c=0;
printf("Enter the no of elements");
scanf("%d",&n);
int a[n];
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if (a[i]%2==0)
    {
        c++;
    }
}
printf("%d",c);
for(i=0;i<n;i++)
{
    if (a[i]%2==0)
    {
      a[k++]=a[i];   
    
    }
    else{
        a[k+c]=a[i];
    
    }
}

for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}


