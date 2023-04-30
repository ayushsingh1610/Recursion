// Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
int print(int,int);
int main()
{
    int start,end;
    printf("Enter the starting point - ");
    scanf("%d",&start);

    printf("Enter the Ending point - ");
    scanf("%d",&end);
    printf("EVEN NUMBERS ARE - \n");
    print(start,end);

    return 0;
}
int print(int a, int b)
{
    if(a>=b)
    return 0;

    else
    {
        if(a%2==0)
        {
            printf(" %d, ",a); 
        }
        return print(a+1,b);
    }
}