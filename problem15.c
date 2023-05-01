// Write a C program to find GCD (HCF) of two numbers using recursion.
#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b;
    printf("Enter the 1st number - ");
    scanf("%d",&a);
    printf("Enter the 2nd number - ");
    scanf("%d",&b);
    printf("The GCD( HCF ) of numbers %d and %d is - %d",a,b,hcf(a,b));
}
int hcf(int a, int b)
{
    if(b%a==0)
    return a;

    else
    return hcf(b%a,a);
}