/*Call by value*/
/*
#include<stdio.h>
void main()
{
    int x=5, y=10;
    printf("x=%d",x,y);
    swap(x,y);
    printf("\nx=%d,y=%d",x,y);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/

/*Call by reference*/

#include<stdio.h>
void main()
{
    int x=5, y=10;
    printf("x=%d",x);
    printf("\ny=%d",y);
    swap(&x,&y);
    printf("\nx=%d, y=%d",x,y);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
/*int *a=&x;
int *b=&y;*/