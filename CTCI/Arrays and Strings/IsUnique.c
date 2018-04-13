#include <stdio.h>
#include <stdlib.h>
int isUnique(char str[])
{
    int i = 0,j,flag = 1;
    int l =0;
    while(str[l] != '\0')
    {
            l++;
    }

    for(i = 0; i < l;i++)
    {
        for(j = i+1;j < l;j++)
        {
            if(str[i] == str[j])
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int isUnique2(char str[])
{
    int ar[256],i;
    for(i = 0;i < 256;i++)
        ar[i]=0;
    i = 0;
    while(str[i] != '\0')
    {
        ar[(int)str[i]]++;
        if(ar[(int)str[i]] > 1)
            return 0;
        i++;
    }



    return 1;
}
int main()
{
    char str[50];int x;
    do{
    printf("Enter the string >> ");
    scanf("%s",str);
    if(isUnique2(str))
    {
        printf("All the characters are unique.\n");
    }
    else
    {
        printf("The characters are repeated.\n");
    }
    printf("Test more ? (0/1) >> ");
    scanf("%d",&x);
    }while(x!=0);
}
