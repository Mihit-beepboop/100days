//Q70: Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
    int i,j,k,n=0,shifter=0;
    printf("Enter the array size and its elements respectively\n");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of k\n");
    scanf("%d",&k);
    (shifter = k%j);
    int b[shifter];
    for(i=shifter;i>0;i--)
    {
        b[i-1]=a[j-1-n];
        n++;
    }
    for(i=j-shifter;i>0;i--)
    {
        a[i-1+shifter]=a[i-1];
    }
    for(i=0;i<shifter;i++)
    {
        a[i]=b[i];
    }
    for(i=0;i<j;i++)
    printf("%d ",a[i]);
return 0;
}