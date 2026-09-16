// Write a C program to check whether a given number is a perfect number.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    printf("Enter the number to know if its perfect\n");
    scanf("%d",&i);
    for(j=1;j<i;j++)
        if(i%j==0)
        k=k+j;
    if (k==i)
    printf("%d is a Perfect number",i);
    else printf("%d is not a Perfect number",i);
    return 0;
}
