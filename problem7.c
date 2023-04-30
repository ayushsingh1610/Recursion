// Write a C program to find power of any number using recursion.
#include<stdio.h>
int power(int,int);
void main()
{
    int n,p;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("Enter the power - ");
    scanf("%d",&p);
    printf("The power %d to the number %d is - %d",p,n,power(n,p));
}
int power(int a, int b)
{
    if(b>1)     //stopping case
    {
        return a*power(a,b-1);
    }
}