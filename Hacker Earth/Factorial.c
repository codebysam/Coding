#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
}
int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n * factorial(n-1);
}
