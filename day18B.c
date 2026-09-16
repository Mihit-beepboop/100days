// Write a C program to find the HCF of two numbers.

#include<stdio.h>
int main()
{
    int i,k,x,y;
    printf("Enter the number to find its HCF\n");
    scanf("%d %d",&i,&k);
    for(x=1;x<=i;x++)
    {
        if (i%x==0 && k%x==0)
        y=x;
    }
    printf("%d",y);
    return 0;
}
