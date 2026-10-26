//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the integer to find its pivot integer if it exitsts\n");
    scanf("%d",&n);
    double x=sqrt(n*(n+1)/2.0);
    if((int)x==x)
    printf("The pivot integer is %.0f\n",x);
    else printf("No pivot integer -1\n");
    return 0;
}
//done in O(1)