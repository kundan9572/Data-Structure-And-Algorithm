/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    int set[25],m,n,i,j,k,d,sum,flag=0;
    printf("\n\t size of the set--->");
    scanf("%d",&n);
    printf("\n\t elements of the set:---->");
    for(i=1;i<=n;i++)
        scanf("%d",&set[i]);
    printf("\t subset value:---->");
    scanf("%d",&d);
    for(i=1;i<=n;i++)
    {
        if(set[i]==d)
        {
            printf("%d\n",set[i]);
            flag=1;
            continue;
        }
        for(j=i+1;j<=n;j++)
        {
            sum=set[i]+set[j];
            if(sum==d)
            {
                printf("%d\t",set[i]);
                printf("%d\n",set[j]);
                flag=1;
            }
            else
            {
                for(k=j+1;k<=n;k++)
                {
                    if(sum+set[k]==d)
                    {
                        printf("%d\t",set[i]);
                        printf("%d\t",set[j]);
                        printf("%d\n",set[k]);
                        flag=1;
                        break;
                    }
                }
            }
        }
    }
if(!flag)
    printf("no solution\n");
}