#include<stdio.h>
int n;
int main()
{
    printf("Enter the number of vertices >> ");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the n x n weighted matrix (1000 if no edge)>>\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInitial weighted matrix >>\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    floyd_warshall(a);
    printf("\nFloyd-Warshall weighted matrix of the graph >>\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }

}
void floyd_warshall(int a[][n])
{
    int d[n][n];
    int i,j,k;
    for(k = 0;k < n;k++)
    {
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                d[i][j] = a[i][j];
            }
        }
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                if(d[i][j] < (d[i][k] + d[k][j]))
                    a[i][j] = d[i][j];
                else
                    a[i][j] = (d[i][k] + d[k][j]);
            }
        }
    }
}
