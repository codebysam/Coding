#include<stdio.h>
#include<math.h>
#define MAX 2147483647
int n;
double dist(int x1,int y1,int x2,int y2)
{
    double res = (sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
    printf("Distance between (%d, %d) and (%d, %d) = %.2lf\n",x1,y1,x2,y2,res);
    return res;
}
int main()
{
    int i,
        j,
        l,
        k;
    char ch;
    printf("Enter the number of vertices >> ");
    scanf("%d",&n);

    int x[n],
        y[n],
        D[n][n];
    double M[n][n],val,Dist[n][n];

    printf("Enter the coordinates (x,y)>> \n");
    for(i = 0;i < n;i++)
        scanf("\n%c%d%c%d%c",&ch,&x[i],&ch,&y[i],&ch);

    for(i = 0;i < n;i++)
    {
        for(j = 0;j <= i;j++)
        {
            M[i][j] = 0.0;
            D[i][j] = 0;
            Dist[i][j] = dist(x[i],y[i],x[j],y[j]);
            Dist[j][i] = Dist[i][j];
        }
    }

    for(i= 0;i < n-1;i++)
    {
        M[i][i+1] = 0;
        D[i][i+1] = 0;
    }

    printf("\nThe dist matrix :\n");
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            printf("%.2lf ",Dist[i][j]);
        }
        printf("\n");
    }

    for(l = 2;l < n;l++)
    {
        for(i = 0;i < n-l;i++)
        {
            j = i+l;
            M[i][j] = MAX;
            for(k = i+1;k < j;k++)
            {
                val = M[i][k] + M[k][j] + Dist[i][k] + Dist[k][j];
                printf("\n%d, %d, %d, %.3lf\n",i,k,j,val);
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
            printf("%.2lf ",M[i][j]);
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

}
