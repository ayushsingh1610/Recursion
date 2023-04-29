// count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",n);
    printf("The digits in a number %d is %d",n,count(n));
}
int count(int k)
{
    int c=0;
    if(k!=0)
    return 1+count(k/10);

    else 
    return 0;
}