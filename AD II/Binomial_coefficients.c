#include<stdio.h>
int binomial_coefficients(int n,int r,int flag)
{
    int D[n+1][n+1],i,j;
    for(i = 0;i <= n;i++)
    {
        D[i][0] = 1;
        D[i][i] = 1;
    }

    for(i = 2;i <= n;i++)
        for(j = 1;j < i;j++)
            D[i][j] = D[i-1][j-1] + D[i-1][j];

    printf("\n");
    if(flag == 1)
    {
        for(i = 0;i <= n;i++)
        {
            for(j = 0;j <= i;j++)
            {
                printf("%3d ",D[i][j]);
            }
            printf("\n");
        }
    }

    return D[n][r];
}

int main()
{
    int n,r,flag;
    printf("Enter positive integer n >> ");
    scanf("%d",&n);
    printf("Enter positive integer r >> ");
    scanf("%d",&r);
    printf("Do you want to see the binomial matrix?(1/0) >> ");
    scanf("%d",&flag);
    if(n >= 0 && r >= 0 && n >= r )
        printf("\n%dC%d = %d\n",n,r,binomial_coefficients(n,r,flag));
    else
        printf("Invalid combination of n and r.");
}
