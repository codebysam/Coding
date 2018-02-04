#include<stdio.h>
int main()
{
    int t,i,a,b,c,d,e;
    scanf("%d",&t);
    for(i = 0;i < t;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        scanf("%d",&e);
        if(a*c + b*d + e + 10 <= 23)
            printf("Khushi");
        else
            printf("Hotash");
    }
}
