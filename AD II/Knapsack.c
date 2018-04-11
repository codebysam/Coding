#include<stdio.h>
void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void swap2(double a[],int i,int j)
{
    double temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main()
{
    int i,
        j,
        n;

    printf("Enter the number of items >> ");
    scanf("%d",&n);
    int item[n];
    double  Q,
            p[n],
            w[n],
            k[n],
            p_w[n],
            tp = 0.0;

    for(i = 0;i < n;i++)
    {
        item[i] = i+1;
        printf("Item %d:\n",i+1);
        printf("Price >> ");
        scanf("%lf",&p[i]);
        printf("Weight >> ");
        scanf("%lf",&w[i]);
        p_w[i] = p[i] / w[i];
    }

    printf("\nItem and their details :\n");
    for(i = 0;i < n;i++)
    {
        printf("Item %d Price %.2lf Weight %.2lf P/w %.2lf\n",item[i],p[i],w[i],p_w[i]);
    }


    printf("\nEnter the maximum limit of the knapsack >> ");
    scanf("%lf",&Q);

    for(i = 1;i < n;i++)
    {
        for(j = 0; j < n-i;j++)
        {
            if(p_w[j] < p_w[j+1])
            {
                swap2(p,j,j+1);
                swap2(w,j,j+1);
                swap2(p_w,j,j+1);
                swap(item,j,j+1);
            }
        }
    }

    printf("\nAfter sorting according to their price/weight ratio:\n");
    for(i = 0;i < n;i++)
    {
        printf("Item %d Price %.2lf Weight %.2lf P/w %.2lf\n",item[i],p[i],w[i],p_w[i]);
    }

    i = 0;
    while(Q >= 0)
    {
         if(Q <= w[i])
         {
             break;
         }

         Q = Q - w[i];
         k[i] = 1.0;
         tp = tp + p[i];
         i++;
    }

    k[i] = Q / w[i];
    tp = tp + Q * p_w[i];
    i++;
    while(i < n)
    {
        k[i++] = 0.0;
    }

    printf("\nItems chosen and their ratio :\n");
    for(i = 0;i < n;i++)
    {
        printf("Item %d ratio %.2lf\n",item[i],k[i]);
    }

    printf("\nHence yeilds a maximum profit of %.2lf",tp);





}
