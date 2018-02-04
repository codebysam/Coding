#include <stdio.h>
#include <stdlib.h>

int main()
{
int t;
	scanf("%d",&t);
	int n[t];
    int flag[t];

	int i =0;
    for(i =0 ; i<t ; i++)
    {
        flag[i] = 0;
    }
	for(i = 0; i < t ; i++)
	{
		scanf("%d",&n[i]);
		if ((n[i]%21) == 0)
		{
			flag[i] = 1;
		}
		else
        {
            while(n[i]!= 0)
            {
                if((n[i]-21)%100==0)
                {
                    flag[i] = 1;
                    break;
                }
                else
                {
                    n[i] = n[i]/10;
                }
            }
        }
	}

	for(i = 0; i < t ; i++)
    {
        if (flag[i]==1)
            printf("The streak is broken!\n");
        else
            printf("The streak lives still in our heart!\n");
    }
}
