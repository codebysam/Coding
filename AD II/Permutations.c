#include<stdio.h>
int is_a_solution(int n,int k)
{
    if(n == k)
        return 1;
    else
        return 0;
}

void construct_candidates(int flag[],int k,int n,int c[],int *ncandidates)
{
    int i;
    int in_perm[n];
    for(i = 0;i < n;i++)
        in_perm[i] = 0;

    for(i = 0;i < k;i++)
        in_perm[flag[i]] = 1;

    *ncandidates = 0;
    for(i = 0;i < n;i++)
    {
        if(in_perm[i] == 0)
        {
            c[*ncandidates] = i;
            *ncandidates = *ncandidates + 1;
        }
    }
}

void process_solution(int a[],int flag[],int n)
{
    int i;
    printf("{ ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",a[flag[i]]);
    }
    printf("}\n");
}

void permutation(int a[],int flag[],int k,int n)
{
    int c[n],
        ncandidates,
        i;

    if(is_a_solution(n,k) == 1)
        process_solution(a,flag,k);
    else
    {
        construct_candidates(flag,k,n,c,&ncandidates);
        for(i = 0;i < ncandidates;i++)
        {
            flag[k] = c[i];
            permutation(a,flag,k+1,n);
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
    permutation(a,flag,0,n);
}
