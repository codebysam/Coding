#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char word[100];
    scanf("%s",word);
    int l = strlen(word);
    int i,a;
    for(i = 0;i < l ; i++)
    {
        a = (int)word[i];
        if(a >= 65 && a <= 90)
            word[i] = (char)(a+32);
        else if(a>=97 && a<=122)
            word[i] = (char)(a-32);
    }
    printf("%s",word);
}
