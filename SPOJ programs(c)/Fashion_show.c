#include<stdio.h>
int main()
{
    int t,i,j,n,k,l,temp;
    scanf("%d",&t);
    int sum[t];
    for(i = 0;i < t;i++)
    {
        scanf("%d",&n);
        int m[n],f[n];
        for(j = 0; j < n ; j++)
        {
            scanf("%d",&m[j]);
        }
        for(j = 0; j < n ; j++)
        {
            scanf("%d",&f[j]);
        }
        for(k = 0; k < n ; k++)
        {
            for(l = 0 ; l < n ; l++)
            {
                if(m[k] < m[l])
                {
                    temp = m[k];
                    m[k] = m[l];
                    m[l] = temp;
                }
                if(f[k] < f[l])
                {
                    temp = f[k];
                    f[k] = f[l];
                    f[l] = temp;
                }
            }
        }

        sum[i] = 0;
        for(j = 0; j < n ; j++)
        {
            sum[i] = sum[i] + m[j] * f[j];
        }

    }
    for(i = 0; i < t ; i++)
        {
            printf("%d\n",sum[i]);
        }
        return 0;
}