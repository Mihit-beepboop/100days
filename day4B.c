// Write a C program to find the sum of the first N natural numbers.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number 'n' here\n");
    scanf("%d",&n);
    printf("The sum of the first'n'natural numbers is %d",n*(n+1)/2);
    return 0;
}
