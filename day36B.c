//Q72: Find the sum of all elements in a matrix.
#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    printf("Enter the array row and column respectively\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the array elements respectively\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("The sum is: %d",sum);
    return 0;
}