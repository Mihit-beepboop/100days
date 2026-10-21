//Q93: Check if two strings are anagrams of each other.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,checker=0;
    printf("Enter the 2 strings respectively to check if they are anagrams\n");
    char s[100],s1[100];
    fgets(s,100,stdin);
    fgets(s1,100,stdin);
    if(strlen(s)!=strlen(s1))
    {
        printf("Unequal number of characters in each string\n");
        return 1;
    }
    while(s[i]!='\n'&&s[i]!='\0')
    {
        j=0;
        checker=0;
        while(s1[j]!='\n'&&s1[j]!='\0')
        {
            if (s[i]==s1[j])
            {
                checker=1;
                s1[j]='*';
                break;
            }
            j++;
        }
        if (checker==0)
        break;
        i++;
    }
    if (checker==1)
    printf("The given strings are an anagram\n");
    else printf("The given strings are not an anagram\n");
    return 0;
}