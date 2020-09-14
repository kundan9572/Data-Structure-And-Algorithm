/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define size 10
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

void binks(int w[size],int p[size],int v[size][size],int n,int m)
{
    int i,j;
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
            if(i==0||j==0)
                v[i][j]=0;
            else if(w[i]>j)
                v[i][j]=v[i-1][j];
            else
                v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
}
void printos(int v[size][size],int n,int m,int w[size])
{
    int i,j,x[size];
    for(i=1;i<=n;i++)
        x[i]=0;
    i=n;
    j=m;
    while(i!=0 && j!=0)
    {
        if(v[i][j]!=v[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
            
        }
        i=i-1;
        
    }
    printf("\n the objects selected are:\n");
    for(i=1;i<=n;i++)
        printf("x[%d]\t",i);
        printf("=");
        for(i=1;i<=n;i++)
            printf("%d",x[i]);
}

int main()
{
    int w[size],p[size],v[size][size],n,m,i,j;
    printf("enter the no of objects\n");
    scanf("%d",&n);
    printf("\n enter the weight of the objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("\n enter the profit of %d objects\n",n);
        for(i=1;i<=n;i++)
            scanf("%d",&p[i]);
    printf("enter the capacity of the knapsack");
    scanf("%d",&m);
    binks(w,p,v,n,m);
    printf("\n output");
    printf("\n the value table:\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("\n %d\t",v[i][j]);
        }
        printf("\n");
    }
    printf("\n the optimal soln=%d",v[n][m]);
    printos(v,n,m,w);
    printf("\n bye");
    return(0);
}