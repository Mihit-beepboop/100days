// Write a C program to calculate a library fine based on the number of days a book is returned late.

#include<stdio.h>
int main()
{
    int i,fine1;
    printf("Enter the days late\n");
    scanf("%d",&i);
    if(i<=5)
    {
        fine1=2*i;
        printf("fine is %d\n",fine1);
    }
    else if(i<=10)
    {
        fine1=4*i-10;
        printf("fine is %d\n",fine1);
    }
    else if(i<=30)
    {
        fine1=6*i-30;
        printf("fine is %d\n", fine1);
    }
    else 
        printf("Membership cancelled\n");
    return 0;
}
