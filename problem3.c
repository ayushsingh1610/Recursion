// print the Fibonacci Series using recursion.
#include<stdio.h>
int fibo(int);
void main()
{
    int a=0,b=1,n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The series is - \n %d %d",a,b);
    for(int i=2; i<=n ;i++)
    {
        printf(" %d",fibo(i));
    }

}
int fibo(int m)
{
    
    if(m==0)
    return 0;

    else if(m==1)
    return 1;

    else
    return fibo(m-1)+fibo(m-2);

}