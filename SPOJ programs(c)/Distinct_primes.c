#include<stdio.h>
int is_prime(int n)
{
    int i,flag = 1;
    for(i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(void)
{
    int n,
        i,
        j,
        k,
        flag,
        c,
        x,
        t;
        scanf("%d",&t);
    for(i = 0;i<t;i++)
    {
    scanf("%d",&x);
    n = 29;
    k = 0;
    while(1)
    {
        c = 0;

        for(j = 2;j<=n;j++)
        {
            if(n % j == 0)
            {
                flag = is_prime(j);
                if (flag == 1)
                    c++;
            }
        }
        if (c>=3)
        {
            k++;
            if(k == x)
            {
                printf("%d\n",n);
                break;
            }
        }
        n++;
    }
    }


}
