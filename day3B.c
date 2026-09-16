// Write a C program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    float a;
    float b;
    float holder;
    printf("Enter your numbers here\n");
    scanf("%f %f",&a,&b);
    holder=a;
    a=b;
    b=holder;
    printf("After swap: %.1f %.1f",(float)a,b);
    return 0;
}
