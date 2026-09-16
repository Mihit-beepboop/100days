// Write a C program to print the natural numbers from 1 to N.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the numbers to be printed\n");
    scanf("%d",&i);
    for (n=1;n<=i;n++)
    {
        printf("%d ",n);
    }
    return 0;
}
