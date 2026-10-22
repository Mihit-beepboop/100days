//Q97: Print the initials of a name.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the name to print the initials\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n'&&s[i]!='\0')
    {
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
    return 0;
}