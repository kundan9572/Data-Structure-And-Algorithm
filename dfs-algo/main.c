/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10
void dfs(int a[size][size],int n,int u,int vis[size])
{
    int v;
    for(v=1;v<=n;v++)
    {
        if(a[u][v]==1 && vis[v]==0)
        {
            vis[v]=1;
            dfs(a,n,v,vis);
        }
    }
}

int main()
{
    int a[size][size],i,j,n,vis[size],flag,conn;
    printf("\n Welcome to the dfs algorithm:");
    printf("\n how many nodes in the graph:---> ");
    scanf("%d",&n);
    printf("\n enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    conn=1;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
            vis[i]=0;
        dfs(a,n,j,vis);
        flag=1;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
                flag=0;
            
        }
        if(flag==0)
            conn=0;
            
    }
    if(conn==1)
        printf("\n the graph is connected graph.\n");
    else
        printf("\n the graph is not connected \n");
    
    printf("\n bye ............");
    return(0);
}
