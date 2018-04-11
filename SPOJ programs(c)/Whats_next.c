#include<stdio.h>
int main(void)
{
    int a1[1000],a2[1000],a3[1000];
    int i = -1,j=0;
    do
    {
        i++;
        scanf("%d%d%d",&a1[i],&a2[i],&a3[i]);

    }while((a1[i]!=0) || (a2[i] != 0) || (a3[i] != 0));
    while(j < i)
    {
        if((a3[j]-a2[j]) == (a2[j]-a1[j]))
        {
            printf("AP %d\n",(a3[j]+a3[j]-a2[j]));
        }
        else
            printf("GP %d\n",(a3[j] * a3[j] / a2[j]));
        j++;
    }
    return 0;
}