#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int min(int a,int b,int c)
{
    if(a < b && a < c)
        return a;
    else if( b < a && b < c)
        return b;
    else
        return c;
}
int OneWay(char s1[],char s2[])
{
    int l1,l2,i,j,upper,diag,left;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if(abs(l1 - l2) > 1)
        return 0;
    int m[l1+1][l2+1];
    for(i = 0; i <= l1;i++)
        m[0][i] = i;
    for(i = 0; i <= l2;i++)
        m[i][0] = i;

    for(i = 1;i <= l2;i++)
    {
        for(j = 1;j <= l1;j++)
        {
            if(s1[j-1] == s2[i-1])
                diag = m[i-1][j-1];
            else
                diag = m[i-1][j-1] + 1;
            upper = m[i-1][j]+1;
            left = m[i][j-1]+1;
            m[i][j] = min(upper,diag,left);
        }
    }

    /*for(i = 0;i <= l2;i++)
    {
        for(j = 0;j <= l1;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }*/

    if(m[l2][l1] > 1)
        return 0;
    return 1;
}
int main()
{
    int x;
    char str1[50],str2[50];
    do{
        printf("Enter string 1 >> ");
        scanf("\n%[^\n]s",str1);
        printf("Enter string 2 >> ");
        scanf("\n%[^\n]s",str2);

        if(OneWay(str1,str2))
        {
            printf("True.\n");
        }
        else
        {
            printf("False.\n");
        }

        printf("Try more ? (0/1) >> ");
        scanf("%d",&x);
    }while(x!= 0);
}