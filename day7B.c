// Write a C program to check whether a character is a vowel or a consonant.

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter the alphabet here to find out if it is a Vowel\n");
    scanf("%c",&alphabet);
    if (alphabet=='a'||
    alphabet=='e'||
    alphabet=='i'||
    alphabet=='o'||
    alphabet=='u')
    {
        printf("%c is a Vowel",alphabet);
    }
    else
    {
        printf("%c is a Consonant",alphabet);
    }
    return 0;
}
