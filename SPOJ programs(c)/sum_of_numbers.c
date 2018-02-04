#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    float x[t],y[t];
    for(i = 0;i < t;i++)
    {
        scanf("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    for(i = 0;i < t;i++)
    {
        printf("%f",x[i] + y[i]);
    }
}
