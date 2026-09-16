//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("Enter the numbers here\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Sum is %.1f\n",(float)(a+b));
    printf("Difference is %.1f\n",(float)(a-b));
    printf("Product is %.1f\n",(float)(a*b));
    printf("Quotient is %.1f\n",(float) a/b);
    return 0;
}
/*%.1f makes it to only 1 decimal place
float tells the compiler to divide after the decimal point as well
without float it results in 0.000000
*/