//Q62: Reverse an array without taking extra space.
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the array size and values respectively\n");
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&j);
        a[i]=j;
    }
    int temp1=0,temp2=0,temp3=k-1;
    while(temp1<temp3)
    {
        temp2=a[temp1];
        a[temp1]=a[temp3];
        a[temp3]=temp2;
        temp1++;
        temp3--;
    }
    printf("The reverse array is");
    for(i=0;i<k;i++)
    printf(" %d ",a[i]);
    return 0;
}