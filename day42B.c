//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
int main()
{
    int i=0;
    char s[100];
    printf("Enter the characters to convert\n");
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!='\0')
    {
        if(s[i]==' ')
        printf("%c",s[i]);
        else
        printf("%c",s[i]-32);
        i++;
    }
    return 0;
}