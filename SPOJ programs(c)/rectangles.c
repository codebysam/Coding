#include<stdio.h>
#include<math.h>
int main(void)
{
    int sum,n,r,i;
    scanf("%d",&n);
    r = (int)(sqrt(n));
    sum = n;
    for(i = 2;i<=r;i++)
    {
        sum = sum + (n / i) - (i-1);
    }

    printf("%d",sum);
}
