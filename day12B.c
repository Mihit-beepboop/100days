// Write a C program to calculate an electricity bill based on the number of units consumed.

#include<stdio.h>
int main()
{
    int i,bill;
    printf("Enter the units consumed\n");
    scanf("%d",&i);
    if(i<=100)
    {
        bill=5*i;
        printf("Bill is %d\n",bill);
    }
    else if(i<=200)
    {
        bill=i*7-200;
        printf("Bill is %d\n",bill);
    }
    else if(i<=300)
    {
        bill=i*10-800;
        printf("Bill is %d\n", bill);
    }
    else 
    {
        bill=i*12-1400;
        printf("Bill is %d\n",bill);
    }
    return 0;
}
