/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i,item,j,n;
    printf("\n enter the no. of elem:---->");
        scanf("%d",&n);
    printf("\n enter the elements--->");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        item=a[i];
        j=i-1;
    while(item<a[j] && j>=0)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=item;
    }
    printf("\n the sorted elements---");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\n");
    return 0;
}
