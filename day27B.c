// Write a C program to print a centered diamond pattern of stars.

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i=i+2)
    {
        for(j=(7-i)/2;j>=1;j--)
        printf(" ");
    for(k=i;k>=1;k--)
    printf("*");
    printf("\n");
    }
    for(i=5;i>=1;i=i-2)
    {
        for(j=(7-i)/2;j>=1;j--)
        printf(" ");
    for(k=i;k>=1;k--)
    printf("*");
    printf("\n");
    }
    return 0;
}
