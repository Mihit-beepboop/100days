//Q57: Find the sum of array elements.
#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter the array size and its values respectively\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[i]=j;
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("The sum is: %d", sum);
    return 0;
}