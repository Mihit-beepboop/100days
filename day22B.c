// Write a C program to find the sum of the series 1 + 3/4 + 5/6 + 7/8 + ... up to N terms.

#include<stdio.h>
int main()
{
    int i;
    float j,k,series=1;
    printf("Enter the number till which you want the sum\n");
    scanf("%d",&i);
    if(i==1)
    printf("Approximate sum: 1");
    else
    {
        for(j=3;j<i*2;j+=2)
        series=series+j/(j+1);
        printf("Approximate sum: %.3f",series);
    }
    return 0;
}
