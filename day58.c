//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include<stdio.h>
int main()
{
    int n,i,left=1,right=1;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("The array cannot exist\n");
        return 1;
    }
    int nums[n],answer[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
        answer[i]=left;
        left=left*nums[i];
    }
    for(i=n-1;i>=0;i--)
    {
        answer[i]=answer[i]*right;
        right=right*nums[i];
    }
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d",answer[i]);
        if(i<n-1)
        printf(",");
    }
    printf("]");
    return 0;
}