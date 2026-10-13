//Q69: Find the second largest element in an array.
#include<stdio.h>
int main()
{
    int i,j,largest=0,largest2=0;
    printf("Enter the array size and elements respectively\n");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        if(a[i]>largest)
        {
            largest2=largest;
            largest=a[i];
        }
        else if(a[i]>largest2)
        largest2=a[i];
    }
    printf("%d is the 2nd largest element\n",largest2);
    return 0;
}
/*only for positive cases
if the array has 2 values that are equal and largest then it will print that value because no mention of distinct values was done
it can be fixed by a simple else if in the 2nd loop*/