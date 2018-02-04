#include<stdio.h>
int main(void)
{
    int n,sum,c,i;
    while(1)
    {
        scanf("%d",&n);
        sum =0;
        c=0;
        if(n == -1)
        {
            break;
        }
        int x[n];
        for(i = 0;i<n;i++)
        {
            scanf("%d",&x[i]);
            sum = sum + x[i];
        }
        if(sum % n != 0)
        {
            printf("-1\n");
        }
        else
        {
            sum = sum / n;
            for(i = 0;i < n;i++)
            {
                if(sum < x[i])
                {
                    c = c + (x[i] - sum);
                }
            }
            printf("%d\n",c);
        }
    }
}
