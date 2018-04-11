#include<stdio.h>
void N_queen(int x[],int n,int k)
{
    int i;
    if(k <= n)
    {
        for(i = 1;i <= n;i++)
        {
            if(place(x,k,i) == 1)
            {
                x[k] = i;
                if(n == k)
                {
                    printf("The queens should be placed in the following ways:\n");
                    for(i = 1;i <= n;i++)
                        printf("x[%d] = %d\n",i,x[i]);
                }
                else
                    N_queen(x,n,k+1);
            }
        }
    }
}
int abs(int x)
{
    if(x < 0)
        return -x;
    else
        return x;
}
int place(int x[],int k,int i)
{
    int j;
    for(j = 1;j < k;j++)
    {
        if(x[j] == i || (abs(x[j]-i) == abs(k-j)))
            return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    printf("Enter the number of queens >> ");
    scanf("%d",&n);

    int x[n+1];
    for(i = 1;i <= n;i++)
        x[i] = 0;
    int k = 1;
    N_queen(x,n,k);


}
