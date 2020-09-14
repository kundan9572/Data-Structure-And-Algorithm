/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define inf 9999
#define size 10
void kruskals(int cam[size][size],int n)
{
    int par[size],i,j,u,v,x,y,count,min,mincost;
    for(i=1;i<=n;i++)
        par[i]=0;
        mincost=0;
        count=1;
    printf("\n there are %d edges in mst:\n",n-1);
    while(count<n)
    {
        min=inf;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cam[i][j]<min)
                {
                    min=cam[i][j];
                    x=u=i;
                    y=v=j;
                }
            }
        }
    while(par[u])
        u=par[u];
    while(par[v])
        v=par[v];
    if(u!=v)
    {
        printf("\n %d---- edge(%d,%d), cost=%d",count,x,y,min);
        par[v]=u;
        mincost+=min;
        count++;
        
    }
    cam[x][y]=cam[y][x]=inf;
    
}
printf("\n the total cost of mst=%d\n",mincost);
}
int main()
{
int cam[size][size],i,j,n;
printf("\n enter no. of vertex\n");
scanf("%d",&n);
printf("enter the cam:\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        scanf("%d",&cam[i][j]);
        if(cam[i][j]==0)
            cam[i][j]=inf;
            
    }
}
printf("\n the edges of mst are:\n");
kruskals(cam,n);
return(0);
}