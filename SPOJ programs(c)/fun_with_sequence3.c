#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);
    int a[m];
    for(i = 0;i < m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    int b[n];
    for(i = 0;i < n;i++)
        scanf("%d",&b[i]);
    for(i = 0;i < n;i++)
    {
        if(a[i] == b[i])
        {
            printf("%d ",i+1);
        }
    }
}
