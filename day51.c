//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include<stdio.h>
int main()
{
    int n,i,target,match1=-1,match2=-1,low,high,mid;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Array size is 0 cant search anything\n");
        return 1;
    }
    int nums[n];
    printf("Enter the sorted array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter the target to search for\n");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            match1=mid;
            high=mid-1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            match2=mid;
            low=mid+1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    printf("%d,%d",match1,match2);
    return 0;
}
// problem solving part done in O(log n)
//inputting an array always takes O(n)