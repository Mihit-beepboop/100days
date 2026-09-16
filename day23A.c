// Write a C program to find the sum of the series 2/3 + 4/7 + 6/11 + 8/15 + ... up to N terms.

#include<stdio.h>
int main()
{
    int i;
    float j,k=3,series;
    printf("Enter the number till which you want the sum\n");
    scanf("%d",&i);
    for(j=2;j<=i*2;j+=2)
    {
        series=series+j/k;
        k=k+4;
    }
    printf("Approximate sum: %.3f",series);
    return 0;
}
