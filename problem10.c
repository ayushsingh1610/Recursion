// Write a C program to find reverse of any number using recursion.
#include<stdio.h>
int Reverse(int);
void main()
{
    int n,backup;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The REVERSE of the number %d is - %d",n,Reverse(n));
}
int Reverse(int a)
{
    static int rev;
    if(a>0)
    {
        int r=a%10;
        rev=(rev*10)+r;
        Reverse(a/10);
    }
    else
    return rev;
}