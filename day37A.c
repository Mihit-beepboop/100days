//Q73: Find the sum of each row of a matrix and store it in an array.
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
        }
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        b[i]=sum;
        printf("Sum of row %d is %d\n",i+1,sum);
        sum=0;
    }
    return 0;
}