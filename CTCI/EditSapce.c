#include <stdio.h>
#include <stdlib.h>
void EditSpace(char s[])
{
    int l = 0,k = 0,i;
    char s1[100];
    while(s[l] != '\0')
    {
        if(s[l] == ' ')
        {
            s1[k++] = '%';
            s1[k++] = '2';
            s1[k++] = '0';
        }
        else
            s1[k++] = s[l];
        l++;
    }
    s1[k] = '\0';
    for(i = 0;i <= k;i++)
        s[i] = s1[i];
}
int main()
{
    char str[50];int x;
    do{
    printf("Enter the string 1>> ");
    scanf("\n%[^\n]s",str);
    EditSpace(str);
    printf("The edited string >> %s\n",str);
    printf("Test more ? (0/1) >> ");
    scanf("%d",&x);
    }while(x!=0);
}
