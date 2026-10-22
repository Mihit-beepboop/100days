//Q95: Check if one string is a rotation of another.
#include<stdio.h>
#include<string.h>
int main()
{
    int k=0,j,match,found=0;
    printf("Enter both strings to check if they are a rotation or not\n");
    char s[200],s1[100];
    fgets(s,100,stdin);
    fgets(s1,100,stdin);
    if(strlen(s)!=strlen(s1))
    {
        printf("given strings are not equal hence they cant be rotations\n");
        return 1;
    }
    int n=strcspn(s,"\n");
    s[n]=0;
    s1[n]=0;
    while(k<n)
    {
        j=0;
        match=1;
        while(s1[j]!='\0')
        {
            if(s1[j]!=s[(j+k)%n])
            {
                match=0;
                break;
            }
            j++;
        }
        if(match==1)
        {
            found=1;
            break;
        }
        k++;
    }
    if(found==1)
    printf("Rotation exists\n");
    else printf("Not a rotation\n");
    return 0;
}