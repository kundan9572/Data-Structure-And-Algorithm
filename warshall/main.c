/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void warshall(int c[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            c[i][j]=(c[i][j]|| c[i][k] && c[k][j]);
            
}
main()
{
    int c[10][10],i,j,n;
    printf("enter the vertex\n");
    scanf("%d",&n);
    printf("enter the cam of graph\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&c[i][j]);
        warshall(c,n);
        printf("the path matrix is\n");
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                printf("%d\t",c[i][j]);
                printf("\n");
                
}
