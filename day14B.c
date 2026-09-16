// Write a C program to find the product of the first N even numbers.

#include<stdio.h>
int main()
{
    int n,i;
    long long even=1;
    printf("Enter the number for the even product\n");
    scanf("%d",&i);
    for (n=2;n<=i*2;n+=2)
    {
        even = even*n;
    }
    printf("The product of the first %d even numbers is: %lld",i,even);
    return 0;
}
