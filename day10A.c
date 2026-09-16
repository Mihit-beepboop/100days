// Write a C program to determine whether a triangle is equilateral, isosceles, or scalene based on its sides.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Numbers here to check\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {printf("Equilateral Triangle");}
    else if(a==b || b==c || c==a)
    {printf("Isosceles Triangle");}
    else printf("Scalene Triangle");
    return 0;
}
