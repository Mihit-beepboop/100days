//Find the digit that occurs the most times in an integer number
#include<stdio.h>
int main()
{
    long num;
    int count[10] = {0};   
    
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    if(num < 0) num = -num;  
    
    while(num > 0)
    {
        int digit = num % 10;   
        count[digit]++;          
        num = num / 10;          
    }
    
    int maxCount = -1, result = -1;
    for(int d = 0; d <= 9; d++)
    {
        if(count[d] > maxCount)
        {
            maxCount = count[d];
            result = d;
        }
    }
    
    printf("%d", result);
    return 0;
}