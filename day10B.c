// Write a C program using a switch statement to display the day of the week for a number from 1 to 7.

#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number 1-7\n");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid Day");
    }
    return 0;
}
