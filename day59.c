//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include<stdio.h>
int main()
{
    int n,i,k,sum=0,max;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int arr[n];
    if(n<=0)
    {
        printf("The array cannot exist\n");
        return 1;
    }
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target size\n");
    scanf("%d",&k);
    if(k<=0||k>n)
    {
        printf("Invalid value of size\n");
        return 1;
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    max=sum;
    for(i=k;i<n;i++)
    {
        sum=sum-arr[i-k]+arr[i];
        if(sum>max)
        max=sum;
    }
    printf("Max sum is %d",max);
    return 0;
}