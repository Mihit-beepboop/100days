//Q80: Multiply two matrices.
#include<stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j,m,sum=0;
    printf("Enter the array 1 row and column respectively\n");
    scanf("%d",&row1);
    scanf("%d",&col1);
    int a[row1][col1];
    printf("Enter the array 1 elements\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the array 2 row and column respectively\n");
    scanf("%d",&row2);
    scanf("%d",&col2);
    if(col1!=row2)
    {
        printf("Invalid array dimensions, cannot multiply\n");
        return 1;
    }
    int b[row2][col2];
    printf("Enter the array 2 elemnts\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[row1][col2];
 for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            sum=0;
            for(m=0;m<col1;m++)
            {
                sum+=a[i][m]*b[m][j];
            }
            c[i][j]=sum;
        }
    }
    printf("The final array is: \n");
     for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    return 0;
}