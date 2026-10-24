//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include<stdio.h>
int main()
{
    int n,i,x,match=-1,low,high,mid;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Array size is 0 cant search anything\n");
        return 1;
    }
    int arr[n];
    printf("Enter the sorted array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target\n");
    scanf("%d",&x);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            match=mid;
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
    }
    if(match==-1)
    printf("No match, -1");
    else
    printf("The index is %d\n",match);
    return 0;
}
// problem solving part done in O(log n)
//inputting an array always takes O(n)