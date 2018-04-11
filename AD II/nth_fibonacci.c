#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of (positive integer)n >> ");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2;i < n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("The fibonacci elements are : ");
    for(i = 0;i < n;i++)
        printf("%d ",fib[i]);
    printf("\nStarting with first element as 0, %dth fibonacci element is %d\n",n,fib[n-1]);
}
