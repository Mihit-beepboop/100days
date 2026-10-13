// Write a C program to convert a given number of seconds into hours, minutes, and seconds.

#include<stdio.h>
int main()
{
    int i,Hours,Minutes,Seconds;
    printf("Enter the seconds to convert them here\n");
    scanf("%d",&i);
    Hours=i/3600;
    Minutes=(i%3600)/60;
    Seconds=(i%3600)%60;
    printf("%.02d:%.02d:%.02d",Hours,Minutes,Seconds);
    return 0;
}
