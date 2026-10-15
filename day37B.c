//Q74: Find the transpose of a matrix.
#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the array row and column respectively\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the array elements respectively\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}