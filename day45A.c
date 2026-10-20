//Q89: Count frequency of a given character in a string.
#include<stdio.h>
int main()
{
    printf("Enter the string and the character to count the frequency respectively\n");
    char n,s[100];
    fgets(s,100,stdin);
    int i=0,freq=0;
    scanf("%c",&n);
    while(s[i]!='\n'&&s[i]!='\0')
    {
        if(s[i]==n)
        freq++;
        i++;
    }
    printf("The frequency of the character %c is %d",n,freq);
    return 0;
}