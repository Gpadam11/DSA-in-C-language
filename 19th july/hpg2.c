#include <stdio.h>
int main()
{
int k=0,i,j,n,c=0,m=0;
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
int b[n];
for(i=0;i<n;i++)
{

    if (a[i]%2==0)
    {
        
      b[k]=a[i];   
      k++;
    
    }
    else{
        b[k+c]=a[i];
    }
    
}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
return 0;
}


