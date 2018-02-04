#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,flag,j;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    int min = a[0];
    int max = a[0];
    for(i= 1; i < n ;i++)
    {
        scanf("%d",&a[i]);
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
    }

    for(i = min ; i <= max ; i++)
    {
        flag = 0;
        for(j = 0 ; j < n ; j++)
        {
            if (i == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 0)
        printf("NO");
    else
        printf("YES");

}
