#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,l,i,j,k,x,c,a;
    char s[200];

    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        scanf("%s",s);
        l = strlen(s);
        x = l / n;
        j = 0;
        i = 0;
        k = 1;
        c = 0;
        a = 0;
        while(1)
        {
            if(j>=l)
            {
                a++;
                j = a;
                k = k + 2;
                i=0;
            }
            {
                printf("%c",s[j],j);
                c++;
            }
            if(i%2 == 0)
                j = j + 2 * n - k;
            else
                j = j + k;

                i++;
                if(c == l)
                    break;

        }
    printf("\n");

    }
}
