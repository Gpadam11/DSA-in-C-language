//wap to add two complex numbers (in real and imaginary parts) by passing structure to a funtion 

#include<stdio.h> 
typedef struct complex{
    int real;
    int imaginary; 
}
complex; 

complex addition(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}
int main()
{
    complex c1, c2, c3;
    printf("Enter the real part of 1st complex number : ");
    scanf("%d",&c1.real);
    printf("Enter the imaginary part of 1st complex number : ");
    scanf("%d",&c1.imaginary);
    printf("Enter the real part of 2nd complex number : ");
    scanf("%d",&c2.real);
    printf("Enter the imaginary part of 2nd complex number : ");
    scanf("%d",&c2.imaginary);
    c3 = addition(c1,c2);
    printf("The sum of two complex numbers is : %d + %di",c3.real,c3.imaginary);
    return 0;
}