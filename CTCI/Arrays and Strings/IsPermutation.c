#include <stdio.h>
#include <stdlib.h>
int isPermutation(char s1[],char s2[])
{
    int l1 = 0,l2 = 0,i;
    int a1[256],a2[256];

    for(i = 0;i < 256;i++)
    {
        a1[i] = 0;
        a2[i] = 0;
    }
    while(s1[l1] != '\0')
    {
        a1[(int)s1[l1]]++;
        l1++;
    }

    while(s2[l2] != '\0')
    {
        a2[(int)s2[l2]]++;
        l2++;
    }

    for(i = 0;i < 256;i++)
    {
        if(a1[i] != a2[i])
            return 0;
    }

    return 1;
}
int main()
{
    char str1[50],str2[50];int x;
    do{
    printf("Enter the string 1>> ");
    scanf("\n%s",str1);
    printf("Enter the string 1>> ");
    scanf("\n%s",str2);
    if(isPermutation(str1,str2))
    {
        printf("They are permutation of each other\n");
    }
    else
    {
        printf("The are not permutation of each other.\n");
    }
    printf("Test more ? (0/1) >> ");
    scanf("%d",&x);
    }while(x!=0);
}
