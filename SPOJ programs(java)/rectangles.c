#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    int i,r;
    int s = n;
    r =(squareroot(n));
    for(i = 2;i<=r;i++)
    {
        s = s + (n/i-(i-1));
    }
    printf("%d",s);
}
int squareroot(int n)
{
    printf("%d\n",n);
    double g1,g2,x;
    g2 = n/2;
    do
    {
        g1 = g2;
        g2 = (g1 + n/g1)/2;

        x=g1-g2;
        if(x<0)
            x = -x;

    }while(x>0.000001);

    return (int)g2;

}


