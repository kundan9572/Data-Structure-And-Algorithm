/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#define size 10
int main()
{
    int dist[size],visited[size],cost[size][size];
    int i,j,k,sv,n,v,w,min;
    printf("\nenter the no. of vertex:\n");
    scanf("%d",&n);
    printf("enter the cost matrix:");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)
        cost[i][j]=9999;
    printf("enter the source vertex-->\n");
    scanf("%d",&sv);
    for(i=1;i<=n;i++)
    {
        visited[i]=0;
        dist[i]=cost[sv][i];
    }
    visited[sv]=1;
    dist[sv]=1;
    for(k=2;k<=n;k++)
    {
        min=9999;
        for(w=1;w<=n;w++)
        {
            if(dist[w]<min && visited[w]==0)
            {
                min=dist[w];
                v=w;
            }
        }
         visited[v]=1;
         for(w=1;w<=n;w++)
         {
             if(dist[v]+cost[v][w]<dist[w])
                dist[w]=cost[v][w]+dist[v];
         }
         
        
    }
    printf("the path matrix is:-->");
    for(j=1;j<=n;j++)
    {
        if(j!=sv)
            printf("%d--->%d==%d\t",sv,j,dist[j]);
    }
    
    
}