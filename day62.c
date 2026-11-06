//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include<stdio.h>
int main()
{
    int i,n,best,current=0;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("The array size is invalid\n");
        return 1;
    }
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    best=arr[0];
    current=arr[0];
    for(i=1;i<n;i++)
    {
        if(current>0)
        current=current+arr[i];
        else
        current=arr[i];
        if(current>best)
        best=current;
    }
    printf("The biggest sub-array sum is %d",best);
    return 0;
}