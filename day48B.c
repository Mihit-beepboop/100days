//Q96: Reverse each word in a sentence without changing the word order.
#include<stdio.h>
int main()
{
    int i=0,j,start,first=1;
    printf("Enter the string to reverse each word\n");
    char temp=0,s[100];
    fgets(s,100,stdin);
    while(s[i]!='\n'&&s[i]!='\0')
    {
        if(s[i]==' '||first==1)
        {
            if(first==1)
            {
                i=-1;
                first=0;
            }
            start=i;
            j=start+1;
            while(s[j]!=' '&&s[j]!='\n'&&s[j]!='\0')
            {
                j++;
            }
            i=j;
            while(start+1<j-1)
            {
                temp=s[start+1];
                s[start+1]=s[j-1];
                s[j-1]=temp;
                j--;
                start++;
            }
        }
        else i++;
    }
    printf("%s",s);
    return 0;
}