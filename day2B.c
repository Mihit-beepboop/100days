//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r;
    printf("Enter the Radius here\n");
    scanf("%f",&r);
    printf("The circumference is %.1f\n",(float)2*3.14*r);
    printf("The are is %.1f\n",(float)3.14*r*r);
    return 0;
}