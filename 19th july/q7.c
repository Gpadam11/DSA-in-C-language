#include <stdio.h>
int main()
{
int i,j,n,c=0,a,b,k=0;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n];
printf("Enter the values");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
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
        if(arr[i]==a)
        {
            c++;
            if(arr[i]==b){
                break;
            }
            else {
            continue;}
        }     
                   }
    }
    

    printf("Number of elements in between two elements (Both Inclusive) = %d",c);

return 0;
}