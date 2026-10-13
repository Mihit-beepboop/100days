// Write a C program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("Enter your numbers here\n");
    scanf("%f %f",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %.1f %.1f",(float)a,b);
    return 0;
}
