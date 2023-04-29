// sum of numbers from 1 to n using recursion.
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The Sum of numbers from 1 to %d is - %d",n,sum(n));
}
int sum(int a)
{
   if(a!=0)
   return a+sum(a-1);
   
   else 
   return 0;
}