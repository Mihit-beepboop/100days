//Search in a sorted array using binary search
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the array's size and value respectively\n");
    scanf("%d",&j);
    int a[j]; 
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search for\n");
    scanf("%d",&k);
    int start=0,end=j-1,mid, check=1;
    while(start<=end)
    {
        mid=(end+start)/2;
        if(a[mid]==k)
        {
            check=mid;
            break;
        }
        else if(a[mid]>k)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(check!=1)
    printf("found at Index %d",check);
else printf("Not found");
return 0;
}