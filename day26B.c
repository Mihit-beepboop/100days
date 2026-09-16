// Write a C program to print a diamond pattern of stars.

#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1;i<=5;i=i+2)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    for(i=3;i>=0;i=i-2)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
