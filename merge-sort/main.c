/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);

void mergesort(int a[],int low,int high)
{
    int mid;
    while(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
        
    }
}
void merge(int a[],int low,int mid,int high)
{
    int  i=low,j=mid+1,k=low;
    int c[size];
    while(i<=mid && j<=high)
    {
        
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=high)
        c[k++]=a[j++];
    for(i=low;i<=high;i++)
        a[i]=c[i];
}

int main()
{
    int a[size],n,i;
    printf("\n enter the no. of elements:--");
    scanf("%d",&n);
    printf("\n enter the elements:--");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge(a,0,0,n-1);
    printf("\n the sorted elements are:----/////");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\n");
    return(0);
}