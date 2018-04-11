#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int t,l,i,j,w;
    scanf("%d",&t);
    int n[t];

    for(i = 0;i < t;i++)
    {
        int k =0;
        scanf("%d",&n[i]);
        int a[n[i]];
        int digit[3*n[i]];
        for(j = 0; j < n[i] ; j++)
        {
            scanf("%d",&a[j]);
            int m = a[j];
            if(m == 0)
            {
                digit[k] = 0;
                k++;
            }
            while(m!=0)
            {
                digit[k]= m%10;
                k++;
                m = m / 10;
            }
        }
        for(l = 0; l < (k-1) ; l++)
        {
             for(w = l+1;w < k ; w++)
             {
                 if(digit[w]>digit[l])
                 {
                    int temp = digit[w];
                    digit[w] = digit[l];
                    digit[l] = temp;
                 }
             }
        }
        for(l = 0 ; l < k ; l++)
        {
            printf("%d",digit[l]);
        }
        printf("\n");
    }
}
