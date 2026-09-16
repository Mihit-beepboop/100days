// Write a C program to find the LCM of two numbers.

#include<stdio.h>
int main()
{
    int i,k,j,x,y=1;
    printf("Enter the numbers to find their LCM\n");
    scanf("%d %d",&i,&j);
    for(k=1;k<=i;k++)
    if(i%k==0 && j%k==0)
    x=k;
    y=(i*j)/x;
    printf("LCM is: %d",y);
    return 0;
}
