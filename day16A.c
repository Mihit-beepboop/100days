// Write a C program to convert a decimal number to binary.

#include<stdio.h>
int main()
{
    int k,i,j,binary=0;
    printf("Enter the number to get its binary\n");
    scanf("%d",&k);
    i=k;
    while(i != 0)
    {
        j=i%2;
        binary = binary*10+j;
        i=i/2;
    }
    printf("The binary of %d is %d",k,binary);
    return 0;
}
