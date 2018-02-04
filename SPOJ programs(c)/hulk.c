#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char h[]= "that I hate ";
    char l[] = "that I love ";
    printf("I ");
    for(i = 1;i <= n;i++)
    {
        if(i == 1)
            printf("hate ");
        else
        {
            if(i % 2 == 1)
                printf("%s",h);
            else
                printf("%s",l);
        }
    }
    printf("it");
    return 0;
}
