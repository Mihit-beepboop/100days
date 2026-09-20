//Q61: Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int i,j,k,E;
    printf("Enter the array size,values and the nedeed element respectively\n");
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&j);
        a[i]=j;
    }
    scanf("%d",&E);
    for(i=0;i<k;i++)
        if(a[i]==E)
        printf("Found at index %d\n",i);
        else 
    {   printf("-1");
        break;
    }
    return 0;
}