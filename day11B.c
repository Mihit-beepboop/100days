// Write a C program to calculate the profit or loss percentage from the cost price and selling price.

#include<stdio.h>
int main()
{
    float SP,CP,difference,percentage;
    printf("Enter the cost price and selling price respectively\n");
    scanf("%f %f",&CP,&SP);
    difference = SP-CP;
    percentage = (difference/CP)*100;
    if(difference>0)
    {printf("Profit %.2f%%",percentage);}
    else if(difference<0)
    {printf("Loss %.2f%%",percentage);}
    else printf("No Profit No Loss");
    return 0;
}
