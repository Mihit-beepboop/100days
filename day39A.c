//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main()
{
    int row,col,i,j,check=1;
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
        for(j=i+1;j<col;j++)
        if(a[i][i]==a[j][j])
        check=0;
    }
    if(check==1)
    printf("True\n");
    else printf("False\n");
    return 0;
}