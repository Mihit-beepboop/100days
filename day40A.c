//Q79: Perform diagonal traversal of a matrix.
#include<stdio.h>
int main()
{
    int row,col,i,j,d,low,high;
    printf("Enter the array row and column respectively\n");
    scanf("%d",&row);
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the array elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(d=0;d<row+col-1;d++)
    {
        low=0;
        if(d-(col-1)>0)
            low=d-(col-1);
        high=row-1;
        if(d<row-1)
            high=d;
        if(d%2==0)
        {
            for(i=high;i>=low;i--)
            {
                printf("%d ",a[i][d-i]);
            }
        }
        else
        for(i=low;i<=high;i++)
        {
            printf("%d ",a[i][d-i]);
        }
    }
    return 0;
}