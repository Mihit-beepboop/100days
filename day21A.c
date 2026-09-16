// Write a C program to swap the first and last digits of a given number.

#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    printf("Enter the number to get its Partial reverse\n");
    scanf("%d",&i);
    if (i<10)
    printf("The reverse number is %d",i);
    int Ldigit=i%10;
    int totalDigit = (int)log10(i);
    int firstdigit = (int)(i/pow(10,totalDigit));
    int middlepart = i%(int)pow(10,totalDigit);
    middlepart=middlepart/10;
    int reversed = Ldigit*pow(10,totalDigit)+(middlepart*10)+firstdigit;
    printf("Partially reversed number is :%d",reversed);
    return 0;
}
