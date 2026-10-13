//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
    int j,i,n;
    printf("Enter the array size and its elements respectively\n");
    scanf("%d",&j);
    int a[j+1];
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted\n");
    scanf("%d",&n);
    for(i=j-1;i>=0;i--)
    {
        if (a[i]>n)
        {
            a[i+1]=a[i];
        }
        else
        {
            a[i+1]=n;
            break;
        }
    }
    if(i<0)
    a[0]=n;
    for(i=0;i<=j;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}