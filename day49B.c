//Q98: Print initials of a name with the surname displayed in full.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,wordL=0;
    printf("Enter the name to print the initials\n");
    char s[100];
    fgets(s,100,stdin);
    j=strcspn(s,"\n")-1;
    while(s[j]!=' '&&s[j]!=!(s[j-1]>='A'&&s[j-1]<='Z' || s[j-1]>='a'&&s[j-1]<='z'))
    {
        wordL++;
        if(j<=0)
        break;
        j--;
    }
    while(s[i]!='\0'&&i<=j)
    {
        if(j==0)
        break;
        if(i==0)
        {
            if(s[i]>='A'&&s[i]<='Z')
            printf("%c.",s[i]);
            else if(s[i]>='a'&&s[i]<='z')
            printf("%c.",s[i]-32);
            i++;
        }
        else if(s[i]!=' '&&!(s[i-1]>='A'&&s[i-1]<='Z' || s[i-1]>='a'&&s[i-1]<='z'))
        {
            if(s[i]>='A'&&s[i]<='Z')
            printf("%c.",s[i]);
            else if(s[i]>='a'&&s[i]<='z')
            printf("%c.",s[i]-32);
            i++;
        }
        else i++;
    }
    j=strcspn(s,"\n")-wordL;
        while(s[j]!='\n')
        {
            printf("%c",s[j]);
            j++;
        }
    return 0;
}