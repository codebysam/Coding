#include<stdio.h>
int Find_max(double a[],int r)
{
    int i,index;
    double max = 0.0;
    for(i = 0;i < r;i++)
    {
        if(max < a[i])
        {
            max= a[i];
            index = i;
        }
    }

    a[index] = 0.0;
    return index;
}
int main()
{
    int n,i,j,m,U;
    printf("Enter the number of items >> ");
    scanf("%d",&n);
    int w[n],p[n],index[n];
    double p_w[n],tp = 0,x[n];
    printf("Enter profit and weight of all items >>\n");
    for(i = 0;i<n;i++)
    {
        printf("Item %d : ",i+1);
        scanf("%d%d",&p[i],&w[i]);
        p_w[i] = (double)p[i] /(double)w[i];
        x[i] = p_w[i];
    }
    printf("Enter the maximum limit of container >> ");
    scanf("%d",&m);
    U = m;
    for(i= 0;i < n;i++)
    {
        index[i] = Find_max(x,n);
    }
    printf("\n");

    i=0;
    while(U > w[index[i]] && i < n)
    {
        U = U - w[index[i]];
        x[index[i]] = 1.0;
        tp = tp + (double)(p[index[i]]);
        i++;
    }
    if(i < n)
    {
        (x[index[i]]) = (double)U / (double)(w[index[i]]);
        tp = tp + x[index[i]] * p[index[i]];
    }

    for(i = 0;i < n;i++)
    {
            printf("%d  %d   %.2lf\n",w[i],p[i],x[i]);

    }
    printf("Total profit = %.2lf\n",tp);

}
