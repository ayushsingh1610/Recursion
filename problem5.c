// count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The digits in a number %d is %d",n,count(n));
}
int count(int k)
{
    static int c=0;
    if(k!=0)
    {
        c++;
    return count(k/10);
    }

    else 
    return c;
}
// Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope. 