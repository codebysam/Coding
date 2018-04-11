#include<stdio.h>
int is_a_solution(int n,int k)
{
    if(n == k)
        return 1;
    else
        return 0;
}

void construct_candidates(int c[],int *ncandidates)
{
    c[0] = 1;
    c[1] = 0;
    *ncandidates = 2;
}

void process_solution(int a[],int flag[],int n)
{
    int i,sum = 0;
    printf("{ ");
    for(i = 0;i < n;i++)
    {
        if(flag[i] == 1)
        {
            printf("%d ",a[i]);
            sum = sum + a[i];
        }
    }
    printf("} -> %d\n",sum);
}

void sum_of_subsets(int a[],int flag[],int k,int n)
{
    int c[n],
        ncandidates,
        i;

    if(is_a_solution(n,k) == 1)
        process_solution(a,flag,k);
    else
    {
        construct_candidates(c,&ncandidates);
        for(i = 0;i < ncandidates;i++)
        {
            flag[k] = c[i];
            sum_of_subsets(a,flag,k+1,n);
        }
        k = k + 1;
    }
}

int main()
{
    int n,i;
    printf("Enter the number of elements >> ");
    scanf("%d",&n);

    int a[n],flag[n];
    printf("Enter the elements >>\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        flag[i] = 0;
    }

    printf("The subsets and their sum are as follows :\n");
    sum_of_subsets(a,flag,0,n);
}