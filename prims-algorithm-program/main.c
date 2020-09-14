/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define inf 9999
#define size 10
void prims(int cam[size][size],int n)
{
    int vis[size],i,j,u,v,count,min,mincost;
    vis[1]=1;
    for(i=2;i<=n;i++)
        vis[i]=0;
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
                    u=i;
                    v=j;
                }
            }
        }
        if(vis[v]==0)
    {
        printf("\n %d---- edge(%d,%d), cost=%d",count,u,v,min);
        vis[v]=1;
        mincost+=min;
        count++;
        
    }
    cam[u][v]=cam[v][u]=inf;
    
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
prims(cam,n);
return(0);
}


