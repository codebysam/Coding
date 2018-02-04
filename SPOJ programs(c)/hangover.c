#include<stdio.h>
int main(void)
{
    double sum,limit;
    int n;
    while(1)
    {
        scanf("%lf",&limit);
        if(limit == 0.0)
            break;
        sum = 0;
        n = 0;
        while(sum <= limit)
        {
            n++;
            sum = sum + 1/(double)(n+1);
        }
        printf("%d card(s)\n",n);
    }
}
