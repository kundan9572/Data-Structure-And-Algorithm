/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define size 10
int q[size],f=-1,r=-1;
void insertq(int elem)
{
    r++;
    q[r]=elem;
    if(f==-1)
    f++;
}

int qdeleteq()
{
    int elem;
    elem=q[f];
    if(f==r)
        f=r=-1;
    else
        f++;
    return(elem);
    
}
int isqempty()
{
    if(f==-1 && r==-1)
        return 1;
    else
        return 0;
}

void bfs(int a[size][size],int n,int src,int t[size][2], int vis[size])
{
    int i,u,k=1,v;
    for(i=1;i<=n;i++)
        vis[i]=0;
        vis[src]=1;
        insertq(src);
        while(! isqempty())
        {
            u=qdeleteq();
            for(v=1;v<=n;v++)
            {
                if(a[u][v]==1 && vis[v]==0)
                {
                    vis[v]=1;
                    t[k][0]=u;
                    t[k][1]=v;
                    k++;
                    insertq(v);
                    
                }
            }
        }
    
}

int main()
{
    int a[size][size],n,src,i,j,t[size][2],vis[size],flag;
    printf("\n how many nodes in graph?--->");
    scanf("%d",&n);
    printf("\n enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    printf("\n enter the source vertex---->");
    scanf("%d",&src);
    bfs(a,n,src,t,vis);
    printf("\n node reachability:\n");
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            printf("\n %d is not reachable",i);
            flag=0;
            
        }
        else
        {
            printf("\n %d is reachable",i);
            flag=1;
        }
    }
    if(flag==0)
    
        printf("\n some nodes are not reachable");
    else
    {
        printf("\n the design of a bfs tree are:\n");
        for(i=1;i<=n;i++)
        printf("\n edge--%d is %d-%d",i,t[i][1],t[i][2]);
    }
    printf("\n bye ..................\n");
    return(0);
}
