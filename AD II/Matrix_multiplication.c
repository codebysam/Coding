#include<stdio.h>
#define MAX 2147483647
int n;
void parenthasize(int D[][n],int i,int j)
{
    if((j-i) == 0)
        return;
    else
    {
        int k = D[i][j];
        if((k-i) != 1)
        {
            printf("(%d - %d) -- Parenthasized further\n",i+1,k+1);
            parenthasize(D,i,k);
        }
        else
        {
            printf("(%d - %d)\n",i+1,k+1);
        }

        if((j - (k+1)) )
        {
            printf("(%d - %d) -- Parenthasized further\n",k+2,j+1);
            parenthasize(D,k+1,j);
        }
        else
        {
            printf("(%d - %d)\n",k+2,j+1);
        }

    }
}
int main()
{
    int i,
        j,
        k,
        l,
        val;

    printf("Enter the number of matrices to be multiplied >> ");
    scanf("%d",&n);

    int p[n+1],M[n][n],D[n][n];

    printf("Enter the matrices dimension array >>\n");
    for(i = 0;i <= n;i++)
        scanf("%d",&p[i]);

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            M[i][j] = 0;
            D[i][j] = 0;
        }
    }

    for(l = 1;l < n;l++)
    {
        for(i = 0;i < n-l;i++)
        {
            j = i+l;
            M[i][j] = MAX;
            for(k = i;k < j;k++)
            {
               val = M[i][k] + M[k+1][j] + p[i]*p[k+1]*p[j+1];
               if(M[i][j] > val)
               {
                   M[i][j] = val;
                   D[i][j] = k;
               }
            }
        }
    }

    printf("\nThe matrix M :\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%2d ",M[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix D :\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%2d ",D[i][j]);
        }
        printf("\n");
    }

    printf("\nThe parenthasization can be done in the following way :\n");
    parenthasize(D,0,n-1);

}