#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n[t],q,sum[t],i;
    for(i = 0 ; i < t; i++)
        sum[i] = 0;
    for(i = 0; i < t ; i++)
    {
        scanf("%d",&n[i]);
        do
        {
            q = n[i] / 5;
            sum[i] = sum[i] + q;
            n[i] = n[i] / 5;
        }while(q >= 1);

    }
    for(i = 0 ; i < t; i++)
        printf("%d\n",sum[i]);
}
