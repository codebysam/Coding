#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n[10000],i,j;
    scanf("%d",&n[0]);
    for(i = 1; i < 10000 ; i++)
    {
        scanf("%d",&n[i]);
        if(n[i-1] == 42)
            break;
    }

    for(j = 0 ; j < (i-1) ; j++)
    {
        printf("%d\n",n[j]);
    }

}
