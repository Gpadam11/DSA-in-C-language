#include <stdio.h>
int main()
{
int temp=0,i,j,n,c=0,a,b,k=0;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n];
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("Enter the element a : ");
    scanf("%d", &a);
    printf("Enter the element b : ");
    scanf("%d", &b);
    for (i=0;i<n;i++)
    {
       if(arr[i]==a || arr[i]==b)
        { 
            k++;
        }
    }

   if(k>=2){
   for(i=0;i<n;i++){ 
        if(arr[i]==a || arr[i]==b)
        {
            c++;
        }     
            if(arr[i]>a && arr[i]<b){
            c++;
        }
    }
    }

    printf("Number of elements in between two elements (Both Inclusive) = %d",c);

return 0;
}


