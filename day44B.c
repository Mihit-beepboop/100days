//Q88: Replace spaces with hyphens in a string.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the string to change it\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!='\0')
    {
        if(s[i]==' ')
        s[i]='-';
        i++;
    }
    printf("%s",s);
    return 0;
}