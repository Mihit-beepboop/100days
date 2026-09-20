//Q60: Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
    int i,j,k,p=0,n=0,z=0;
    printf("Enter the array size and values respectively\n");
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&j);
        a[i]=j;
        if(j<0)
        n++;
        else if(j>0)
        p++;
        else
        z++;
    }
    printf("Positive: %d Negative: %d Zero: %d",p,n,z);
    return 0;
}