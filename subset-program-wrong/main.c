/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 5
void sos(int s[size],int n,int d)
{
    int vis[size],i,k,sum,count;
    for(i=1;i<=n;i++)
        vis[i]=0;
    sum=0;
    k=1;
    vis[k]=1;
    count=0;
    for(;;)
    {
        if(k<=n && vis[k]==1)
        {
            if(sum+s[k]==d)
            {
                count++;
                printf("\n solution is %d:",count);
                for(i=1;i<=n;i++)
                {
                    if(vis[k]==1)
                        printf("%d\t",s[i]);
                }
                printf("\n");
                vis[k]==0;
            }
            else if(sum+s[k]<d)
            {
                sum=sum+s[k];
            }
            else
            {
                vis[k]==0;
            }
        }
        else
        {
            k--;
            while(k>0 && vis[k]==0)
                k--;
            if(k==0) break;
            vis[k]=0;
            sum=sum-s[k];
        }
        k++;
        vis[k]=1;
    }
    if(count!=0)
        printf("\n there are %d subsets:\n",count);
    else
        printf("\n sorry no solution\n");
        
}


int main()
{
    int s[size],n,d,i;
    printf("\n how many elements in the set?---->");
    scanf("%d",&n);
    printf("enter %d elements in sorted order:\n",n);
    for(i=1;i<=n;i++)
        scanf("%d",&s[i]);
    printf("\n eneter the value of d?--->");
    scanf("%d",&d);
    sos(s,n,d);
    printf("bye ....................................\n");
    return(0);
}
