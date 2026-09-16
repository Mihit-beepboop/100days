// Write a C program to calculate simple interest and compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
    float P;
    float R;
    float T;
    printf("Enter the Principal amount,interest rate and time in years respectively here\n");
    scanf("%f %f %f",&P,&R,&T);
    printf("Simple interest=%.1f\n",(float)(P*R*T)/100);
    printf("compound interest=%.1f",(float) (P * pow(1 + R / 100.0, T) - P));
    return 0;
}
