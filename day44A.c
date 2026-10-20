//Q87: Count spaces, digits, and special characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,space=0,digits=0,spchar=0;
    printf("Enter the string to check characters\n");
    char s[100];
    fgets(s,100,stdin);
    while( s[i]!='\n' && s[i]!='\0')
    {
        if(s[i]==' ')
        space++;
        else if(s[i]>='0' && s[i]<='9')
        digits++;
        else if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
        spchar++;
        i++;
    }
    printf("Spaces=%d, Digits=%d, special characters=%d",space,digits,spchar);
    return 0;
}