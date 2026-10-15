//Q75: Add two matrices.
#include<stdio.h>
int main()
{
    int i,j,row1,col1,row2,col2;
    printf("Enter the 1st array row and column respectively\n");
    scanf("%d",&row1);
    scanf("%d",&col1);
    int a[row1][col1];
    printf("Enter the 1st array elements\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the 2nd array row and column respectively\n");
    scanf("%d",&row2);
    scanf("%d",&col2);
    int b[row2][col2];
    if(row1!=row2||col1!=col2)
    {
        printf("Array column or row do not match, Invalid input\n");
        return 1;
    }
    printf("Enter the 2nd array elements\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[row1][col1];
    printf("The final array is\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*can directly be done without the use of 3rd matrix, by printing the sum instead of storing it in c
but Q did not ask specifically for that so this is what i prefer*/