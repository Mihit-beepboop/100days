// Write a C program to print all prime numbers up to a given number.

#include<stdio.h>
int main()
{
    int i,j,k,checker;
    printf("Enter the numbers till which u want to find the Primes\n");
    scanf("%d",&i);
    if(i<=1)
    printf("No Prime");
    for(j=2;j<=i;j++)
    {
        checker=1;
        for(k=2;k<=j/2;k++)
        {
            if(j%k==0)
            {
                checker=0;
                break;
            }
        }
        if (checker==1)
        printf("The Primes are: %d ",j);
    }
    return 0;
}
