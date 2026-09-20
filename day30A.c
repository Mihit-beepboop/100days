//Q59: Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int i,j,n,k=0,x=0;
    printf("Enter the array size and values respectively\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[i]=j;
        if(a[i]%2==0)
        k++;
    else x++;
    }
    printf("Even %d\n",k);
    printf("Odd %d",x);
    return 0;
}