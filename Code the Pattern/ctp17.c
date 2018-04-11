#include<stdio.h>
int main()
{
    int n,i,j,k= 1;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= 2*n-1;j++)
        {
            if (j <= n-i)
                printf(" ");
            else if(j >= n+i)
                break;
            else
                printf("%d",k);
            if (j != 2*n-1)
                printf(" ");
        }
        k = k+2;
        printf("\n");
    }
}
