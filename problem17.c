// Write a C program to find sum of elements of array using recursion.
#include<stdio.h>
int Sumarr(int a[]);
void main()
{
    int a[5];
    printf("Enter the elements in array - ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sum of array elements are - %d",Sumarr(a));
}
int Sumarr(int a[])
{
    static int sum,i;

    if(i<5)
    {
        sum+=a[i];
        i++;
        return Sumarr(a);
    }
    else
    return sum;
}