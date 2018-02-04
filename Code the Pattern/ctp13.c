#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        k = 64 + (2 * i - 1);
        for(j = 1;j <= 2*n-1;j++)
        {
            if (j <= n-i)
                printf(" ");
            else if(j >= n+i)
                break;
            else
                {
                    printf("%c",(char)k);
                    k--;
                }
            if (j != 2*n-1)
                printf(" ");
        }
        printf("\n");
    }
}
