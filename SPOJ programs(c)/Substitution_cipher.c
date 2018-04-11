#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,i,j,k;
    scanf("%d",&n);
    char a[30];
    scanf("%s",a);
    scanf("%d",&t);
    for(i = 0;i < t;i++)
    {
        char b[150];
        scanf("\n%[^\n]s",b);
        j=0;
        while(b[j] != '\0')
        {
            k = 0;
            while(a[k]!='\0')
            {
                if(a[k] == b[j])
                {
                    b[j] = a[(k+1)%n];
                    break;
                }
                k++;
            }
            j++;

        }

        printf("%s\n",b);

    }
    return 0;
}
