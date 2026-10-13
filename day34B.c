//Q68: Delete an element from an array.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the array size and elements respectively\n");
    scanf("%d",&j);
    int a[j];  
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the array index to be removed\n");
    scanf("%d",&n);
    if(n>j-1 || n<0)
    {
        printf("Invalid Index");
        return 1;
    }
    for(i=n;i<j-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<j-1;i++)
    printf("%d ",a[i]);
if (i==0)
printf("The array has no elements anymore\n");
return 0;
}