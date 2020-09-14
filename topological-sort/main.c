/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10
int stack[size],top=-1;
void push(int elem)
{
    stack[++top]=elem;
}
int pop()
{
    return(stack[top--]);
}
int stackempty()
{
    if(top==-1) return 1;
        return 0;
}
void readmat(int am[size][size],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        scanf("%d",&am[i][j]);
}
void writemat(int am[size][size], int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",am[i][j]);
            printf("\n");
    }
}
void findindeg(int am[size][size],int indeg[size],int n)
{
    int i,j,sum;
    for(j=1;j<=n;j++)
    {
        sum=0;
        for(i=1;i<=n;i++)
            sum+=am[i][j];
        indeg[j]=sum;
    }
}

void toposort(int am[size][size],int n)
{
    int u,v,k,indeg[size],ts[size],i;
    findindeg(am,indeg,n);
    for(i=1;i<=n;i++)
    {
        if(indeg[i]==0)
            push(i);
    }
    k=1;
    while(!stackempty())
    {
        u=pop();
        ts[k++]=u;
        for(v=1;v<=n;v++)
        {
            if(am[u][v]==1)
            {
                indeg[v]-- ;
                if(indeg[v]==0)
                    push(v);
            }
        }
    }
    printf("\n the topologically sorted sequence of the graph is:  \n");
    for(i=1;i<=n;i++)
        printf("%d\t",ts[i]);
}

int main()
{
    int am[size][size],n;
    printf("\n how many vertices is the graph??--->");
    scanf("%d",&n);
    printf("ente the adjacency matrix in the graph:");
    readmat(am,n);
    printf("the adjacency matrix is:");
    writemat(am,n);
    toposort(am,n);
    printf("\n");
    return(0);

}