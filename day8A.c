// Write a C program to check whether a character is an uppercase letter, lowercase letter, digit, or special character.

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter you character here to check\n");
    scanf("%c",&alphabet);
    if(alphabet>='A' && alphabet<= 'Z')
    {printf("Uppercase Alphabet");}
    else if(alphabet>= 'a' && alphabet<= 'z')
    {printf("Lowercase Alphabet");}
    else if(alphabet>= '0' && alphabet<= '9')
    {printf("Digit");}
    else printf("Special Character");
    return 0;
}
