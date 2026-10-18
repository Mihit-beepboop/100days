//Q78: Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
    int row,col,i,j,sum=0;
    printf("Enter the array row and column respectively\n");
    scanf("%d",&row);
    scanf("%d",&col);
    if(row!=col)
    {
        printf("Non square matrix does not work, Invalid input\n");
        return 1;
    }
    int a[row][col];
    printf("Enter the array elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<row;i++)
    {
        sum+=a[i][i];
    }
    printf("The sum is: %d",sum);
    return 0;
}