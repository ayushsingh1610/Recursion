// Write a C program to find factorial of any number using recursion.
#include<stdio.h>
int factorial(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The factorial of the number %d is - %d",n,factorial(n));
}
int factorial(int n)
{
    if(n==0)
    return 1;

    else
    return n*factorial(n-1);
}