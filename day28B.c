//Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the array size and its values respectvely\n");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++)
    {
        scanf("%d",&n);
        a[i]=n;
    }
    printf("The array is\n");
    for(i=0;i<j;i++)
    printf("%d ",a[i]);
return 0;
}