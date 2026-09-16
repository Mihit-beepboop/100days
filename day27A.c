// Write a C program to print a left-aligned diamond pattern of stars.

#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1;i<=9;i=i+2)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=7;i>=0;i=i-2)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
