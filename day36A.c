//Q71: Read and print a matrix.
#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the array row and column respectively\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}