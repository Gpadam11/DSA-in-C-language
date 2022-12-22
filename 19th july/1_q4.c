#include <stdio.h>
int main()
{
int a[5], temp=0,i,j;
printf("Enter the values");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=0;i<5-1;i++)
{
    for(j=0;j<5-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<5;i++){
printf("%d\t",a[i]);
}
return 0;
}