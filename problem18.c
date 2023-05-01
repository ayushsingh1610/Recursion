// Write a C program to find maximum and minimum elements in array using recursion.
#include<stdio.h>
int max(int x[],int);
int min(int y[],int);
int main()
{
    int a[5];
    printf("Enter the elements in array - ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Maximun element is - %d\nThe Minimun element is - %d\n",max(a,0),min(a,0));
    return 0;
}
int max(int x[],int i)
{
    static int temp;
    
    if(i<5)
    {
        if(x[i]>temp)
        {
        temp=x[i];
        i++;
        return max(x,i+1);
        }
    }
    else
    return temp;
}
int min(int y[],int j)
{
    static int m=100;
    if(j<5)
    {
        if(y[j]<m)
        {
            m=y[j];
        }
    return min(y,j+1);
    }
    else 
    return m; 
}