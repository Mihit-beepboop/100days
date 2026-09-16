// Write a C program to print a right-aligned inverted triangle pattern of stars.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(int k=1;k<=5-i;k++)
        printf(" ");
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
