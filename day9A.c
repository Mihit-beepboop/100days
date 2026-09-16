// Write a C program to find the roots of a quadratic equation.

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant;
        printf("Enter a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
        discriminant = b*b - 4*a*c;
            if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Real and different roots: %.2f and %.2f", root1, root2);
    }
    else if (discriminant == 0)
    {
        float root1 = -b / (2*a);
        printf("Real and equal roots: %.2f", root1);
    }
    else
    {
        printf("Imaginary roots");
    }
    return 0;
}
