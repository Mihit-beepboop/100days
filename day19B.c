// Write a C program to find the sum of the digits of a given number.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    printf("Enter the number to get its sum\n");
    scanf("%d",&i);
    while(i!=0)
    {
        j=i%10;
        k=k+j;
        i=i/10;
    }
    printf("%d is the sum",k);
    return 0;
}
