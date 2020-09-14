/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a[10],i,n,pos=0,key,flag=0,low,mid,high;
    printf("\n enter the no. of elements:---");
    scanf("%d",&n);
    printf("\n enter the elements:---");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n enter the elements to search:---");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<high)
    {
        pos=i;
        mid=(low+high)/2;
        if(key==a[mid])
        {
            pos=mid;
            flag=1;
            break;
        }
        else if(key>a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    if(flag==0)
        printf("\n %d elements not found",key);
    else
        printf("\n  elements %d found at pos %d:--",key,pos+1);
   return(0);
}