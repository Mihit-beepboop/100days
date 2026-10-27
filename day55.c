//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include<stdio.h>
int main()
{
    int n,i,candidate=0,count=0;
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
    }
    for(i=0;i<n;i++)
    {
        if(count==0)
        candidate=arr[i];
        if(arr[i]==candidate)
        count++;
        else count--;
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        count++;
    }
    if (count>(n/2))
    printf("The Majority element is %d",candidate);
    else printf("No Majority element -1");
    return 0;
}
//done in O(n)