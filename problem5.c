// count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",n);
    int ans = count(n);
    
    printf("The digits in a number %d is %d",n,ans);
}
int count(int k)
{
    static int c;
    if(k!=0)
    {
        c++;
        count(k/10);
    }
    return c;
}