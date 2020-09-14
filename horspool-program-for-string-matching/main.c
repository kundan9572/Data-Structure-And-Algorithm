/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#define maxn 100
#define maxm 10
int stable(char p[maxn], int st[128])
{
    int i,m;
    m=strlen(p);
    for(i=0;i<128;i++)
    
        st[i]=m;
        
    
    for(i=0;i<m-2;i++)
    
        st[p[i]]=m-1-i;
    
}
int hpool(char t[maxn],char p[maxm])
{
    int st[128],i,k,n,m;
    n=strlen(t);
    m=strlen(p);
    stable(p,st);
    i=m-1;
    while(i<=n-1)
    {
        k=0;
        while(k<=m-1 && t[i-k]==p[m-1-k])
        {
            k=k+1;
            if(k==m)
                return(i-m+1);
            else
                i=i+st[t[i]];
        }
        return -1;
    }
}

int main()
{
    char t[maxn],p[maxm];
    int pos;
    printf("\n enter the string(without space)--->");
    scanf("%s",t);
    printf("\n enter the string pattern:--->");
    scanf("%s",p);
    pos=hpool(t,p);
    if(pos>0)
        printf("\n congrates %s found at %d position",p,pos+1);
    else
        printf("\n sorry %s not found",p);
    printf("\n bye...............................");
    return(0);
}
