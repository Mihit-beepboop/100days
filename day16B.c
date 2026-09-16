// Write a C program to check whether a given number is a palindrome.

#include<stdio.h>
int main()
{
    int x,i,j,k=0;
    printf("Enter the number to check if it is a Palindrome\n");
    scanf("%d",&x);
    i=x;
    while (i!=0)
    {
        j=i%10;
        k=k*10+j;
        i=i/10;
    }
    if (k==x)
    {
        printf("Your number is a palindrome");
    }
    else
    printf("Your number is not a palindrome");
    return 0;
}
