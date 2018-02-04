#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        k=1;
        for(j = 1;j <= n;j++)
        {
            if(j <= i-1)
                printf(" ");
            else
            {
                printf("%d",k);
                k++;
            }
            if(j!=n)
                printf(" ");
        }
        printf("\n");

    }
}
