//Q82: Print each character of a string on a new line.
#include<stdio.h>
int main()
{
    int i=0;
    char s[100];
    printf("Enter the characters\n");
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
    return 0;
}