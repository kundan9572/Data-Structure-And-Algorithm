/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#define max 10
int bforce(char *search, char *pattern, int slen,int plen)
{
    int i,j,k;
    for(i=0;i<=slen-plen;i++)
    {
        for(j=0,k=i;(search[k]==pattern[j]) && (j<plen);j++,k++);
            if(j==plen)
                return j;
    }
    return -1;
}

int main()
{
    char searchstr[max],pattern[max];
    int res;
    printf("\n enter the string:--->");
    scanf("%s",searchstr);
    printf("\n enter the string to search:--->");
    scanf("%s",pattern);
    searchstr[strlen(searchstr)-1]='\0';
    pattern[strlen(pattern)-1]='\0';
    res=bforce(searchstr,pattern,strlen(searchstr),strlen(pattern));
    if(res==-1)
    {
        printf("search string in not available");
    }
    else
    
    {
        printf("search string is available");
        
    }
    return(0);
    
}