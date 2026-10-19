//Q83: Count vowels and consonants in a string.
#include<stdio.h>
int main()
{
    int i=0,vowel=0,consonants=0,extra=0;
    char s[100];
    printf("Enter the characters\n");
    fgets(s,100,stdin);
    while(s[i]!='\n' && s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        vowel++;
        else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        consonants++;
        else extra++;
        i++;
    }
    printf("The Vowels are %d\nThe Consonants are %d\n",vowel,consonants);
    return 0;
}
/*extra in the else part allows to filter out non alphabets
It can be modified to print how many spaces are used in the strings as well*/