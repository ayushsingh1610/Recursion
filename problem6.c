// get the largest element of an array using recursion.
#include<stdio.h>
int largest(int x[],int);
void main()
{
    int a[5],i;
    printf("Enter the elements in array - ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    int ans = largest(a,0);
    printf("largest : %d",ans);
}
int largest(int x[],int j){
    static int temp=0;
    if(x[j]>temp)
    {
        temp=x[j];
        largest(x,j+1);
    }
    else if(x[j]<temp)
    {
        largest(x,j+1);
    }
    return temp;
}