//Write a program to convert temperature from Celsius to Fahrenheit.#include<stdio.h>
int main()
{
    float C;
printf("Enter the Celsius here\n");
scanf("%f",&C);
printf("Faherenheit=%.1f\n",(float)(C*9/5)+32);
return 0;
}