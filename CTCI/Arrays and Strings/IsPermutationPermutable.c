#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int IsPermutationPermutable(char str[])
{
    int ar[256],i,c = 0;
    for(i = 0;i < 256;i++)
        ar[i]=0;
    i = 0;
    while(str[i] != '\0')
    {
        str[i]=tolower(str[i]);
        if(str[i] != ' ')
            ar[(int)str[i]]++;
        i++;
    }

    for(i = 0;i < 256;i++)
    {
        if(ar[i] % 2 == 1)
            c++;
        if(c > 1)
            return 0;
    }
    return 1;
}
int main()
{
    char str[50];int x;
    do{
    printf("Enter the string 1>> ");
    scanf("\n%[^\n]s",str);
    if(IsPermutationPermutable(str))
    {
        printf("True.\n");
    }
    else
    {
        printf("False.\n");
    }
    printf("Test more ? (0/1) >> ");
    scanf("%d",&x);
    }while(x!=0);
}
