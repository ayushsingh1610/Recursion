//Print first 50 natural number 
#include<stdio.h>
int natural(int);
void main()
{
    int n=1;
    printf("The first 50 natural numbers are - ");
    natural(n);
    
}
int natural(int a)
{
    if(a<=50)
    {
        printf("%d  ",a);
        natural(a+1);
    }
    else
    return 0;
}
