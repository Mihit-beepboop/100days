// Write a C program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number to find out if it is even or odd\n");
    scanf("%d",&i);
    if(i % 2 == 0)
    printf("%d is even",i);
    else
    {
        printf("%d is odd",i);
    }
    return 0;
}
