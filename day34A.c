//Q67: Insert an element in an array at a given position.
#include<stdio.h>
int main()
{
    int j,i,n,k;
    printf("Enter the array size and elements respectively\n");
    scanf("%d",&j);
    int a[j+1];
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be insereted and its index respectively\n");
    scanf("%d",&n);
    scanf("%d",&k);
    if(k>j || k<0)
    {
        printf("Index does not exist\n");
        return 1;
    }
    for(i=j-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=n;
    for(i=0;i<=j;i++)
    printf("%d ", a[i]);
    return 0;
}