/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                printf("%d",arr[j]);
                break;
            }
            else if(j==n-1)
            printf("-1");
        }
        if(i!=n-1)
        printf(",");
    }
    return 0;
}
// done with O(n^2) because of the nested loops.
// can be done in O(n) using stack.