// sum of numbers from 1 to n using recursion.
#include<stdio.h>
int sum(int);
void main()
{
    int n,p;
    printf("Enter the number - ");
    scanf("%d",&n);
    p=sum(n);
    printf("The Sum of numbers from 1 to %d is - %d",n,p);
}
int sum(int a)
{
    int s=0,k=1;

    if(k<=a)
    {
        s=s+k;
        sum(k+1);
    }
    return s;

}