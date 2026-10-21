//Q92: Find the first repeating lowercase alphabet in a string.
#include<stdio.h>
int main()
{
    int i=0,j,check=0;
    printf("Enter the string to find the repetitive character\n");
    char seen[26]={0};
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n'&&s[i]!='\0')
    {
        for(j=0;j<26;j++)
        {
            if(s[i]==seen[j])
            {
                check=1;
            }
        }
        if (check==1)
        break;
        if(s[i]>='a' && s[i]<='z')
        {
            seen[s[i]-'a']=s[i];
        }
        i++;
    }
    if (check==1)
    printf("the first repeating character is %c\n",s[i]);
    else printf("No repeated lowercase alphabets\n");
    return 0;
}