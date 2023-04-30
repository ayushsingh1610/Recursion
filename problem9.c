// Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int Sum(int,int);
void main()
{
    int start,end;
    printf("Enter the starting point - ");
    scanf("%d",&start);

    printf("Enter the Ending point - ");
    scanf("%d",&end);

    printf("The sum of EVEN number between %d to %d is - %d",start,end,Sum(start,end));
}
int Sum(int a,int b)
{
    static int sum=0;
    if(a<=b)
    {
        if(a%2==0)
        {
            sum+=a;
            return Sum(a+1,b);
        }
    }
    else 
    return sum;
    
}