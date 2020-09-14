/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i,j,n,min,pos;
    printf("\n enter the no. of elements--->");
    scanf("%d",&n);
    printf("\n enter the %d elems:--->",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                min=a[j];
                pos=j;
            }
            
        }
        min=a[pos];
        a[pos]=a[i];
        a[i]=min;
    }
    printf("\n the sorted elements is:--");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\n");
        return(0);
}