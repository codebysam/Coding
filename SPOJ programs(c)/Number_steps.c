#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);

    int x[t],y[t],point[t];
    for(i = 0;i<t;i++)
    {
    scanf("%d%d",&x[i],&y[i]);
    if( (x[i] == y[i]) || (x[i] == (y[i]+2)) && (x >= 0) && (y >= 0))
    {
        if(y[i] % 2 == 0)
            point[i] = x[i] + y[i];
        else
            point[i] = x[i]+y[i]-1;
    }
    else
        point[i] = -5;

    }
    for(i = 0;i < t ; i++)
    {
        if (point[i] != -5)
            printf("%d\n",point[i]);
        else
            printf("No Number\n");
    }
}
