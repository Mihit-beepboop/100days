// Write a C program to find the product of the odd digits of a given number.

#include<stdio.h>
int main()
{
    int i,j,k=1;
    printf("Enter the number to get the sum of odd digits\n");
    scanf("%d",&i);
    while(i!=0)
    {
        j=i%10;
        if(j%2==1)
        k=k*j;
        i=i/10;
    }
    if(k==1)
    printf("no odd digits, assume 1");
    else
    printf("Sum is: %d",k);
    return 0;
}
