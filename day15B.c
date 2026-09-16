// Write a C program to reverse the digits of a given number.

#include<stdio.h>
int main()
{
    int a,reverse=0,count;
    printf("Enter the number to reverse it\n");
    scanf("%d",&a);
    while(a !=0)
    {
        count=a%10;
        reverse = reverse *10 + count;
        a=a/10;
    }
    printf("The reverse is %d",reverse);
    return 0;
}
