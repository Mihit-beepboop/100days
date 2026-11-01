//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include<stdio.h>
int main()
{
    int n,k,i,front=0,back=-1;
    printf("Enter the array size\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("array cannot exist\n");
        return 1;
    }
    int arr[n],dq[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the window size k\n");
    scanf("%d",&k);
    if(k<=0||k>n)
    {
        printf("invalid window size\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        if(front<=back&&dq[front]<=i-k)
        front++;
        while(front<=back&&arr[dq[back]]<=arr[i])
        back--;
        back++;
        dq[back]=i;
        if(i>=k-1)
        {
            printf("%d",arr[dq[front]]);
            if(i<n-1)
            printf(" ");
        }
    }
    return 0;
}