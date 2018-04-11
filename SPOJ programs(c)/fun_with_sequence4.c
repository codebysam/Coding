#include<stdio.h>
int main()
{
    int n,x,i,j;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);

    int b[n];
    for(i = 0;i < n;i++)
        scanf("%d",&b[i]);
    for(i = 0;i < n;i++)
    {
        for(j = -x;j <= x;j++)
        {
            if(a[i] == b[i+j])
            {
                printf("%d ",i+1);
                break;
            }
        }

    }
}
