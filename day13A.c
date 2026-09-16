// Write a C program to create a simple calculator using arithmetic operators.

#include<stdio.h>
int main()
{
    float x,y,answer;
    char operator;
    printf("Enter the details here\n");
    scanf("%f %f %c",&x,&y,&operator);
    switch(operator)
    {
        case '*': 
        answer=x*y;
        printf("%.2f",answer);
        break;
        case '/':
        answer=x/y;
        printf("%.2f",answer);
        break;
        case '%':
        answer=(int)x % (int)y;
        printf("%.2f",answer);
        break;
        case '+':
        answer=x+y;
        printf("%.2f",answer);
        break;
        case '-':
        answer=x-y;
        printf("%.2f",answer);
        break;
        default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}
