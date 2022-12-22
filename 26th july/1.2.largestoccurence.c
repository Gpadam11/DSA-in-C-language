#include <stdio.h>
#include <stdlib.h>
int main()
{
int m=0,i,n;
printf("Enter the no of elements");
scanf("%d",&n);

printf("Enter the values");
int *a = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
        m=1;
        
    }
    else if(a[i]==max)
    {
        m++;
    }
   
}
printf("Largest element=%d", max);
printf("\ncounts of occurence=%d", m);
}