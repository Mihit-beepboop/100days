// Write a C program to print all the factors of a given number.

#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter the number to find its HCF\n");
    scanf("%d",&i);
    for(x=1;x<=i;x++)
    {
        if (i%x==0)
        printf("%d ",x);
    }
    return 0;
}
