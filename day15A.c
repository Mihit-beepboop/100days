// Write a C program to find the factorial of a given number.

#include<stdio.h>
int main()
{
    int a,b;
    long long factorial=1;
    printf("Enter the number for the factorial\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    factorial=factorial*b;
    printf("The factorial is: %lld",factorial);
    return 0;
}
