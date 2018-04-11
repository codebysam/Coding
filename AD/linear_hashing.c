#include<stdio.h>
int h(int x,int i,int p)
{
    return (x % p + i);
}
int H(int a[],int x,int i,int p,int y)
{
    int l = h(x,i,p)%p;
    if(a[l] == 0 || a[l] == y)
        return l;
    else
        return H(a,x,i+1,p,y);
}
int main()
{
    int n,p,k,i,x;
    printf("Enter the number of elements >>");
    scanf("%d",&n);
    printf("Enter the mod value >> ");
    scanf("%d",&p);
    int a[p];
    for(i = 0;i < p;i++)
        a[i] = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&x);
        k = H(a,x,0,p,0);
        a[k] = x;
    }
    printf("\n");
    for(i = 0;i < p;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("Enter the element to be searched >> ");
    scanf("%d",&x);
    i = H(a,x,0,p,x);
    if(a[i] == x)
        printf("%d\n",i);
    else
        printf("-1\n");
}

