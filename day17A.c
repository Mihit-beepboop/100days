// Write a C program to check whether a given number is an Armstrong number.

#include<stdio.h>
int main()
{
    int a,b=0,c,d=0,e,g=0;
    printf("Enter the number to check\n");
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        c=c/10;
        b++;
    }
    c=a;
    while (c!=0)
    {
        int f=1;
        d=c%10;
        for (e=1;e<=b;e++)
        {f=f*d;}
        g+=f;
        c=c/10;
    }
    if (g==a)
    printf("%d is an armstrong number",a);
    else printf("%d is not an armstrong number",a);
    return 0;
}
