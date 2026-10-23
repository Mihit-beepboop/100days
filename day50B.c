//Q100: Print all sub-strings of a string.
#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    printf("Enter the string to print all the sub-strings\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n'&&s[i]!='\0')
    {
        j=i;
        while(s[j]!='\n'&&s[j]!='\0')
        {
            if(j!=0)
            printf(",");
            k=i;
            while(k<=j&&s[k]!='\n'&&s[k]!='\0')
            {
                printf("%c",s[k]);
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}