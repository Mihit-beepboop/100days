// Write a C program to check whether a given number is a strong number.

#include<stdio.h>
int main()
{
    int extra,i,j=0,k,x=1,y=0;
    printf("Enter the number to check\n");
    scanf("%d",&i);
    extra=i;
    while(extra!=0)
    {
        j=extra%10;
        {
            for(k=1;k<=j;k++)
            x=x*k;
        }
        y+=x;
        extra=extra/10;
        x=1;
    }
    if(y==i)
    printf("%d is a Strong Number",i);
    else printf("%d is not a Strong Number",i);
    return 0;
}
