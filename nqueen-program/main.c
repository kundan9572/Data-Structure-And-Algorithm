/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define size 10
int place(int x[], int k)
{   
    int i;
    for(i=0;i<k;i++)
        if(x[i]==x[k] || abs(x[i]-x[k])==abs(i-k))
            return 0;
        return 1;
        
}
void display(int x[],int n)
{
    char chessb[size][size];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            chessb[i][j]='x';
    for(i=0;i<n;i++)
        chessb[i][x[i]]='q';
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%c",chessb[i][j]);
        printf("\n");
        
    }
    printf("\n");
}
void nqueen(int n)
{
    int x[size];
    int k;
    x[0]=-1;
    k=0;
    while(k>=0)
    {
        x[k]=x[k]+1;
        while(x[k]<n && !place(x,k))
         x[k]=x[k]+1;
         if(x[k]<n)
            if(k==n-1)
                display(x,n);
            else
            {
                k++;
                x[k]=-1;
            }
            else k-- ;
            
    }
}

main()
{
    int n;
    printf("\n enter the no of queen--->");
    scanf("%d",&n);
    printf("\n the soln of %d queens are :-->",n);
    nqueen(n);
}