#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,l;

    scanf("%d",&t);
    char ar[t][150];
    for(i = 0 ; i < t ; i++)
    {
        scanf("%s",ar[i]);
    }
    for(i = 0; i < t; i++)
    {
        int c1 = 0, c2 = 0;
        l = strlen(ar[i]);

        for(j = 0;j<l;j++)
        {
            if((l-j)>=7)
            {
                if((ar[i][j] == 'S')&&(ar[i][j+1] == 'U')&&(ar[i][j+2] == 'V')&&(ar[i][j+3] == 'O')&&(ar[i][j+4] == 'J')&&(ar[i][j+5] == 'I')&&(ar[i][j+6] == 'T'))
                    c1 = c1+1;
                else
                    if((ar[i][j] == 'S')&&(ar[i][j+1] == 'U')&&(ar[i][j+2] == 'V')&&(ar[i][j+3] == 'O'))
                        c2 = c2+1;
            }
            else
            if((l-j)>=4)
            {
                if((ar[i][j] == 'S')&&(ar[i][j+1] == 'U')&&(ar[i][j+2] == 'V')&&(ar[i][j+3] == 'O'))
                    c2 = c2+1;
            }

        }
        printf("SUVO = %d, SUVOJIT = %d\n",c2,c1);

    }


}
