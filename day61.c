//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include<stdio.h>
int main()
{
    int i,n,k,var=0;
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
    printf("Enter the target window\n");
    scanf("%d",&k);
    if(k<=0 || k>n)
    {
        printf("The target window size is invalid\n");
        return 1;
    }
    for(i=0;i<=n-k;i++)
    {
        if(var<i)
        var=i;
        while(var<n && arr[var]>=0)
        var++;
        if(var<=i+k-1)
        printf("%d",arr[var]);
        else printf("0");
        if(i<n-k)
        printf(" ");
    }
    return 0;
}
