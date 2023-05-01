// Write a C program to find LCM of two numbers using recursion.
#include<stdio.h>
int lcm(int,int);
void main()
{
    int a,b;
    printf("Enter the 1st number - ");
    scanf("%d",&a);
    printf("Enter the 2nd number - ");
    scanf("%d",&b);
    printf("The LCM of numbers %d and %d is - %d",a,b,lcm(a,b));
}
int lcm(int a,int b)
{
    static int temp=1;
    if(temp%a==0 && temp%b==0)
    return temp;
    
    else 
    {
        temp++;
        return lcm(a,b);
    }
}