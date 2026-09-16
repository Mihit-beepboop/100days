// Write a C program to check whether a given number is prime.

#include<stdio.h>
int main()
{
    int i,j=1,k;
    printf("Enter the number to check if it is prime\n");
    scanf("%d",&i);
    if (i<=1)
    {printf("Not Prime");}
    else 
    {for (k=2;k<i;k++)
        {
            if(i%k==0)
            {j=0;
            break;}
        }
        if (j==1)
        printf("Prime");
        else printf("Not prime");
    }   
        return 0;
}
