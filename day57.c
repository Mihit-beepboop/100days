//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(a[j]>a[i])
            {
                printf("%d",a[j]);
                break;
            }
            if(j==0)
            {
                printf("-1");
                break;
            }
        }
        if(i<n-1)
        printf(", ");
    }
    return 0;
}