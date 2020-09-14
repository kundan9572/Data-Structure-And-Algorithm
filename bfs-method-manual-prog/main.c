/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10
void bfs(int a[size][size],int n,int source,int s[size])
{
    int i,f,r,q[20],u,v;
    for(i=1;i<=n;i++)
        s[i]=0;
    f=r=0;
    q[r]=source;
    s[source]=1;
    while(f<=r)
    {
        u=q[f++];
        for(v=1;v<=n;v++)
        {
            if(a[u][v]==1 && s[v]==0)
            {
                s[v]=1;
                q[++r]=v;
            }
        }
        
    }
}

void main()
{
    int n,a[size][size],source,s[size],i,j;
    printf("\n enter the no of nodes");
    scanf("%d",&n);
    printf("\n enter the am:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter the source vertex:");
    scanf("%d",&source);
    bfs(a,n,source,s);
    for(i=1;i<=n;i++)
    {
        if(s[i]==0)
            printf("vertex %d is not reachable\n",i);
            else
            printf(" vertex %d is reachable\n",i);
    }
}