//Merge two arrays.
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the first array's size and values respectively\n");
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&j);
        a[i]=j;
    }  
    printf("Enter the second array's size and values respectively\n");
    scanf("%d",&n);
    int b[n];
      for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        b[i]=j;
    }  
    int c[k+n];
    for(i=0;i<k;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n;i++)
    c[k+i]=b[i];
printf("The Merged array is: ");
    for(i=0;i<k+n;i++)
    printf("%d ",c[i]);
return 0;
}