/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
main()
{
    int vis[10],i,j,k,w,v,min;
    int n,sv,dist[10],cost[10][10]; /* sv is src cost is cam vis is path */
    printf("\n enter the no. of vertices\n");
    scanf("%d",&n);
    printf("enter the cost of matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    printf("\n enter the source vertex:\n");
    scanf("%d",&sv);
    for(i=1;i<=n;i++)
    {
        vis[i]=0;
        dist[i]=cost[sv][i];
        
    }
    vis[sv]=1;
    dist[sv]=1;
    for(k=2;k<=n;k++)
    {
        min=999;
        for(w=1;w<=n;w++)
        if(dist[w]<min && vis[w]==0)
        {
            min=dist[w];
            v=w;
            
        }
        vis[v]=1;
        for(w=1;w<=n;w++)
            if(dist[v]+cost[v][w]<dist[w])
                dist[w]=cost[v][w]+dist[v];
    }
    printf("shortest path\n");
    for(j=1;j<=n;j++)
    {
        if(j!=sv)
            printf("%d--->%d==%d\n",sv,j,dist[j]);
    }
}
