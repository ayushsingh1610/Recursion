// Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int Sum(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);

    printf("The SUM of digits of number %d is - %d",n,Sum(n));
}
int Sum(int n)
{
    static int sum;
    if(n!=0)
    {
        int r=n%10;
        sum+=r;
        return Sum(n/10);
    }
    else
    return sum;
}