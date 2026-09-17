//Q58: Find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the array size and values respectively\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[i]=j;
    }
    int min=a[0],max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    printf("Minimum is: %d\n",min);
    printf("Maximum is: %d",max);
    return 0;
}