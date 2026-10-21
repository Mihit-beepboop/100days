//Q91: Remove all vowels from a string.
#include<stdio.h>
int main()
{
    int i=0,k=0;
    printf("Enter the string to change it\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n'&&s[i]!='\0')
    {
        if (!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
        {
            s[k]=s[i];
            k++;
        }
        i++;
    }
    s[k]='\0';
    puts(s);
    return 0;
}