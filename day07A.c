// Write a C program to check whether a given year is a leap year.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter the Year here to find out\n");
    scanf("%d",&i);
    if (i % 4 == 0 && i % 100 != 0)
    {
        printf("%d is a Leap year",i);
    }
    else if(i%400==0)
    {
        printf("%d is a Leap year",i);
    }
    else 
    {
        printf("%d is not a leap year",i);
    }
    return 0;
}
