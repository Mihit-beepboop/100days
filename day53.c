//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include<stdio.h>
int main()
{
    int n,i,pivot_index=-1,Tsum=0,Lsum=0;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("array cannot exist\n");
        return 1;
    }
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        Tsum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        Lsum=0;
        else
        Lsum+=arr[i-1];
        if((Tsum-Lsum-arr[i])==Lsum)
        {
            pivot_index=i;
            break;
        }
    }
    if(pivot_index==-1)
    printf("No such index exists -1\n");
    else
    printf("The pivot index is %d",pivot_index);
    return 0;
}
//done in O(n)