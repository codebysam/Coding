#include<stdio.h>
int max(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}
int main()
{
    int i,j,n,l;
    printf("Enter the number of elements >> ");
    scanf("%d",&n);

    int ar[n],f[n];
    printf("Enter the elements >> ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&ar[i]);
        f[i] = 1;
    }

    for(i = 1;i < n;i++)
    {
        int k = f[i];
        for(j = 0;j < i;j++)
        {
            if(ar[j] <= ar[i])
            {
                f[i] = max(f[i],k + f[j]);
            }
        }

	   printf("For i = %d >> ",i);
        for(l = 0;l < n;l++)
        printf("%d ",f[l]);
        printf("\n");
    }

    printf("\nFinal output::");
    for(i = 0;i < n;i++)
        printf("%d ",f[i]);
}
