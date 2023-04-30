// Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int isPalindrome(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    if(isPalindrome(n)==n)
    printf("The number is Palindrome.");

    else
    printf("The number is NOT a Palindrome");
}
int isPalindrome(int n)
{
    static int rev;
    if(n!=0)
    {
        int r=n%10;
        rev=(rev*10)+r;
        return isPalindrome(n/10);
    }
    else 
    return rev;
}