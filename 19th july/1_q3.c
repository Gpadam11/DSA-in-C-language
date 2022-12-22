#include <stdio.h>
int main()
{
    int i,n,ele;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the element to be found : ");
    scanf("%d", &ele);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==ele)
        {
			printf("element found at index : %d",i);
            return 0;		 
        }
    }
}