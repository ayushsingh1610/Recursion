// print the array elements using recursion. 
#include<stdio.h>
void print(int x[],int);
void main()
{
    int a[10],i;

    printf("Enter the elements in array -\n");
    for( i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are -\n");
    print(a,0);
}
void print(int x[],int j)
{

    if(j<=9)
    {
    printf("%d ",x[j]);
    
    print(x,j+1);
    return;
    }
}