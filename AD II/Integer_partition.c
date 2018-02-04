#include<stdio.h>
#define MAX 2147483647
int k;
int max(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}

void partition(int D[][k],int ar[],int i,int j)
{
    int l;
    if(j == -1)
    {
        return;
    }
    else
    {
        int index = D[i][j];
        partition(D,ar,index,j-1);
        printf("Group %d : ",j+1);
        if(j == 0)
            index = -1;
        for(l = index+1;l <= i;l++)
        {
            printf("%2d ",ar[l]);
        }
        printf("\n");
    }

}
int main()
{
    int n,
        i,
        j,
        l,
        min,
        val;
    printf("Enter the number of elements you want to divide >> ");
    scanf("%d",&n);

    int ar[n];
    printf("Enter the element numbers(Positive integer) >>\n");
    for(i = 0;i < n;i++)
        scanf("%d",&ar[i]);

    printf("Enter the number of divisions required >> ");
    scanf("%d",&k);

    int M[n][k],D[n][k];
    for(i = 0;i < k;i++)
    {
        M[0][i] = ar[0];
        D[0][i] = 0;
    }

    for(i = 1;i < n;i++)
    {
        M[i][0] = M[i-1][0] + ar[i];
        D[i][0] = 0;
    }

    for(i = 1;i < n;i++)
    {
        for(j = 1;j < k;j++)
        {
            M[i][j] = MAX;
            for(l = 0;l < i;l++)
            {
                val = max(M[l][j-1],M[i][0]-M[l][0]);
                if(M[i][j] > val)
                {
                    M[i][j] = val;
                    D[i][j] = l;
                }
            }
        }
    }

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < k;j++)
        {
            printf("%2d ",M[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < k;j++)
        {
            printf("%2d ",D[i][j]);
        }
        printf("\n");
    }

    partition(D,ar,n-1,k-1);
}
