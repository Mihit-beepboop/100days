//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main ()
{
    float Length;
    float Breadth;
    printf("Enter the Length and Breadth here\n");
    scanf("%f",&Length);
    scanf("%f",&Breadth);
    printf("The Perimeter is %.1f\n",(float) 2*(Length+Breadth));
    printf("The Area is %.1f\n",(float)Length*Breadth);
    return 0;
}