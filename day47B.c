//Q94: Find the longest word in a sentence.
#include<stdio.h>
int main()
{
    int i=0,index=0,main_index=0,wordcount=0,best=0;
    printf("Enter your string to find the longest word\n");
    char s[100];
    fgets(s,100,stdin);
    while(s[i]!='\0')
    {
        if(s[i]==' '||s[i]=='\n')
        {
            index=i-wordcount;
            if(wordcount>best)
            {
                best=wordcount;
                main_index=index;
            }
            wordcount=0;
        }
        else
        wordcount++;
        i++;
    }
    for(i=main_index;i<main_index+best;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}