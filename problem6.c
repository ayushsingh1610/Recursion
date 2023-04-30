// get the largest element of an array using recursion.
#include<stdio.h>
int largest(int x[]);
void main()
{
    int a[3],i;
    printf("Enter the elements in array - ");
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
    int ans = largest(a);
    printf("largest : %d",ans);
}
int largest(int x[])
{
    static int temp;
    int i=0;
    if(x[i]>temp)
    {
        temp=x[i];
        i++;
    }
    else 
    return temp;
}