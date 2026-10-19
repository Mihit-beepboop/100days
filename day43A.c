//Q85: Reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string to reverse\n");
    char s[100];
    fgets(s,100,stdin);
    int n=strlen(s);
    char s1[100];
    for(int i=0;i<n-1;i++)
    {
        s1[i]=s[n-i-2];
    }
    s1[n-1]='\0';
    puts(s1);
    return 0;
}