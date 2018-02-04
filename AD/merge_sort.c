#include<stdio.h>
void merge_sort(int a[], int b[], int p, int r)
{
    if(p < r)
    {
        int mid = (p+r)/2;
        merge_sort(a,b,p,mid);
        merge_sort(a,b,mid+1,r);
        merge(a,b,p,mid,r);
    }
}
void merge(int a[],int b[],int p,int mid,int r)
{
    int l,
        i = p,
        k = p,
        j = mid + 1;
    while(i <= mid && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i = i + 1;
        }
        else
        {
            b[k] = a[j];
            j = j + 1;
        }
        k = k + 1;
    }
    if(j>r)
    {
        for(l = i;l <= mid; l++)
        {
            b[k] = a[l];
            k = k + 1;
        }
    }
    else
    {
        for(l = j;l <= r; l++)
        {
            b[k] = a[l];
            k = k + 1;
        }
    }
    for(l = p; l <= r; l++)
	{
		a[l] = b[l];
	}

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
    printf("\nAfter sorting >> ");
    merge_sort(a,b,0,n-1);
    for(i = 0; i < n ; i++)
    {
        printf("%d  ",a[i]);
    }

}
