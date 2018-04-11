#include<stdio.h>
int length(int n)
{
    int i = 0;
    while(n!=0)
    {
        n = n / 10;
        i++;
    }
}
int power(int x,int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x,y-1);
}
int recursive_multiply(int a,int b)
{
    int l1,l2,x1,y1,x0,y0,p,x1y1,x0y0,n;
    l1 = length(a);
    l2 = length(b);
    if(l1 < l2)
        n = l2;
    else
        n = l1;
    if(n > 1)
    {
    x1 = a / power(10,(n/2));
    x0 = a % power(10,(n/2));
    y1 = b / power(10,(n/2));
    y0 = b % power(10,(n/2));
    p = recursive_multiply((x0+x1),(y0+y1));
    x1y1 = recursive_multiply(x1,y1);
    x0y0 = recursive_multiply(x0,y0);
    return (x1y1 * power(10,n) + (p - x1y1 -x0y0) * power(10,n/2) + x0y0);
    }
    else
        return a * b;
}
int main()
{
    printf("%d",recursive_multiply(2,32679));
}
