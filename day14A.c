// Write a C program to find the sum of the first N odd numbers.

#include<stdio.h>
int main()
{
    int n,i,odd=0;
    printf("Enter the number for the odd sum\n");
    scanf("%d",&i);
    for (n=1;n<=i*2;n+=2)
    {
        odd+=n;
    }
    printf("The sum of the first %d odd numbers is: %d",i,odd);
    return 0;
}
