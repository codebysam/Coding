#include<stdio.h>
int find_sq(int n)
{
    if(n == 0)
        return 0;
    else
        return (n * n + find_sq(n-1));
}
int main()
{
    int x[1000],sq[1000];
    int i = -1,j;
    do
    {
        i++;
        scanf("%d",&x[i]);
        sq[i] = find_sq(x[i]);

    }while(x[i] != 0);

    for(j = 0;j < i;j++ )
        printf("%d\n",sq[j]);
}
