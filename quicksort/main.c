/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int partition(int a[],int low,int high)
{
    int i,j,key,temp;
    key=a[low];
    i=low+1;
    j=high;
    while(1)
    {
        while(i<high && key>=a[i])
            i++;
        while(key<a[j])
            j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
        }
        return j;
    }
}

int quicksort(int a[],int low,int high)
{
    int j;
    while(low<high)
    {
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
        
    }
}

int main()
{
    int a[10],i,n;
    printf("\n enter the no. of elements:-->");
    scanf("%d",&n);
    printf("\n enter the elements:--->");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\n the sorted elements are:--->");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\n");
    return(0);
}
