#include<stdio.h>
int main()
{
    int n,i,j,k=+1;
    scanf("%d",&n);
    for(i = n;i >= 1;i--)
    {
        for(j = 1;j <= i;j++)
        {
            printf("%d",k);
            if(j!=i)
                printf(" ");
        }
        printf("\n");
        k++;
    }
}
