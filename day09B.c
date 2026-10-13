// Write a C program to assign a grade based on the percentage obtained.

#include<stdio.h>
int main()
{
    int grade;
    printf("Enter the percentage here to get the grade\n");
    scanf("%d",&grade);
    if(grade>=90 && grade<=100)
    {printf("Grade A");}
    else if(grade>=80 && grade<=89)
    {printf("Grade B");}
    else if(grade>=70 && grade<=79)
    {printf("Grade C");}
    else if(grade>=60 && grade<=69)
    {printf("Grade D");}
    else printf("Grade F");
    return 0;
}
