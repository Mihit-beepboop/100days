//Q90: Toggle case of each character in a string.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the string to toggle its characters\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!='\0')
    {
        if (s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
        else if (s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32;
        i++;
    }
    printf("%s",s);
    return 0;
}