#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = n;i >= 1;i--)
    {
        k = 65;
        for(j = 1;j <= i;j++)
        {
            printf("%c",(char)k);
            if(j!=i)
                printf(" ");
            k++;
        }
        printf("\n");

    }
}
