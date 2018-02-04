#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char word[100];
    scanf("%s",word);
    int l = strlen(word);
    int i,a,flag=0,mid=l/2;

    for(i = 0;i < mid ; i++)
    {
        if(word[i] != word[l-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("YES");
    else
        printf("NO");
}
