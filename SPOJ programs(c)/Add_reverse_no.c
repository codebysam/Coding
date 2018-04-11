#include<stdio.h>
int reverse(int n)
{
    int num = 0,rem;
    while (n!=0)
    {
        rem = n % 10;
        num = num * 10 + rem;
        n = n /10;
    }
    return num;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    int n[t],m[t],num[t],sum;
    for(i = 0; i< t ; i++)
    {
        scanf("%d%d",&n[i],&m[i]);
        n[i] = reverse(n[i]);
        m[i] = reverse(m[i]);
        sum = n[i] + m[i];
        num[i] = reverse(sum);
    }
    for(i = 0;i < t;i++)
        printf("%d",num[i]);
}
