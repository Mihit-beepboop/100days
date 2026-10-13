// Write a C program to check whether a number is positive, negative, or zero.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number to find out if it is Positive,Negative or zero\n");
    scanf("%d",&i);
    if (i>0)
    {
        printf("%d is Positive",i);
    }
    else if(i==0)
    {
        printf("%d is Zero",i);
    }
    else
    {
        printf("%d is Negative",i);
    }
    return 0;
}
