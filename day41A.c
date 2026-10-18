//Q81: Count characters in a string without using built-in length functions.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the characters\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!= '\0')
    {
        i++;
    }
    printf("The total number of characters are: %d", i);
    return 0;
}