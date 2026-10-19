//Q86: Check if a string is a palindrome.
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string to check if it is a palindrome or not\n");
    char s[100],s1[100];
    fgets(s,100,stdin);
    int i,k = strlen(s);
    for(i=0;i<k-1;i++)
    {
        s1[i]=s[k-i-2];
    }
    s1[k-1]='\n';
    s1[k]='\0';
    if(strcmp(s,s1)==0)
    printf("It is a Palindrome\n");
    else printf("It is not a Palindrome\n");
    return 0;
}
// can be done without string.h by using a loop to check characater by character till we hit \0 instead of strcmp