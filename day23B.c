// Write a C program to print a 5 x 5 square pattern of stars.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        {
            for(j=0;j<5;j++)
            printf("*");
        }
        printf("\n");
    }
return 0;
}
