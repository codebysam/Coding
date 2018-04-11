#include<stdio.h>
void quick_sort(int a[],int p, int r)
{
    if(p<r)
    {
        int q = partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
int partition(int a[],int p,int r)
{
    int i = p-1,
        j = p;
    while(j<r)
    {
        if(a[j] < a[r])
        {
            i++;
            swap(&a[i],&a[j]);
        }
        j++;
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int n,i;
    printf("Enter the number of elements >> ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements >> \n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    quick_sort(a,0,n-1);
    printf("\nAfter sorting >> ");
    for(i = 0; i < n ; i++)
    {
        printf("%d  ",a[i]);
    }

}
