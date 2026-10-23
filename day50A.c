//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
int main()
{
    int i=0,month=0;
    printf("Enter the date to change the format\n");
    char s[12];
    fgets(s,12,stdin);
    month=(s[3]-'0')*10+(s[4]-'0');
    if(month<1||month>12)
    {
        printf("Invalid Month\n");
        return 1;
    }
    char a[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    while(s[i]!='\n'&&s[i]!='\0')
    {
        if(i==3)
        {
            printf("%s",a[month-1]);
            i=i+2;
        }
        if(s[i]=='/')
        printf("-");
        else
        printf("%c",s[i]);
        i++;
    }
    return 0;
}