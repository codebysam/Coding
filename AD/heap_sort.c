#include<stdio.h>
void build_heap(int a[],int n);
void heap_sort(int a[],int s[],int n);
int extract_min(int a[],int l);
void bubble_down(int a[],int i,int l);
void swap(int *p,int *q);

build_heap(int a[],int n)
{
    int i,l = (n)/2;
    for(i = l;i >= 1;i--)
    {
        bubble_down(a,i,n);
    }
}

void bubble_down(int a[],int i,int n)
{
    int l,r,smallest = i;
    l = 2*i;
    r = l+1;
    if(l <= n && a[l] < a[i])
        smallest = l;
    if(r <= n && a[r] < a[smallest])
        smallest = r;
    if(smallest != i)
    {
        swap(&a[i],&a[smallest]);
        bubble_down(a,smallest,n);
    }
}
void swap(int *p , int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void heap_sort(int a[],int s[],int n)
{
    int i,l = n;
    for(i = 1;i <= n;i++)
    {
        s[i] = extract_min(a,l);
        l--;
    }
}
int extract_min(int a[],int n)
{
    int min = a[1];
    a[1] = a[n];
    bubble_down(a,1,n);
    return min;

}
int main()
{
	int n,i;
	printf("Enter the number of elements >> ");
	scanf("%d",&n);
	printf("Enter the elements >>\n");
	int a[n+1],s[n+1];
	for(i = 1;i < n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	build_heap(a,n);
	printf("\nThe heap array is >> ");
	for(i = 1; i < n+1 ;i++)
        {
                printf("%d  ",a[i]);
        }

	heap_sort(a,s,n);
	printf("\nThe sorted array is >> ");
	for(i = 1; i < n+1 ;i++)
	{
		printf("%d  ",s[i]);
	}
	printf("\n");
}
