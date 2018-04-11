#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int n,t,i,j,index;
    scanf("%d",&t);
    for(i = 0;i < t;i++)
    {
        scanf("%d",&n);
        int x[n],y[n];
        double dist,max = 0;
        index = 0;
        for(j = 0;j < n;j++)
        {
            scanf("%d%d",&x[j],&y[j]);
            dist = sqrt(x[j] * x[j] + y[j] * y[j]);
            if(max < dist)
            {
                max = dist;
                index = j;
            }
        }
        printf("Case %d: %d\n",i+1,index+1);
    }
    return 0;
}
