#include<stdio.h>
int power(int x,int y)
{
    if (y == 0)
            return 1;
    else
        return x * power(x,y-1);
}
int main()
{
    int t,a,b,x,y,p,ld,i,r;
    scanf("%d",&t);
    for(i = 0;i < t; i++)
    {
        scanf("%d%d",&a,&b);
        x = a % 10;
        if (b == 0)
            ld = 1;
        else
        {
             r = b % 4;
                if (r==0)
                    ld = (power(x,3) * x)%10;
                else
                ld = power(x,r) % 10;

        }

        printf("%d\n",ld);
    }
}
