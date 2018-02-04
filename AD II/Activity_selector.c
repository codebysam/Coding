#include<stdio.h>
void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main()
{
    int i,n,j,k = 0;
    printf("Enter the number of activities >> ");
    scanf("%d",&n);

    int s[n],
        f[n],
        a[n],
        A[n][3];

    printf("Enter the starting time and the finishing time of each activity :\n");
    for(i = 0;i < n;i++)
    {
        a[i] = i+1;
        printf("Activity %d:\n",i+1);
        printf("Starting time >> ");
        scanf("%d",&s[i]);
        printf("Finishing time >> ");
        scanf("%d",&f[i]);
    }

    for(i = 1;i < n;i++)
    {
        for(j = 0;j < n-i;j++)
        {
            if(f[j] > f[j+1])
            {
                swap(f,j,j+1);
                swap(s,j,j+1);
                swap(a,j,j+1);
            }
        }
    }

    A[k][0] = a[0];
    A[k][1] = s[0];
    A[k][2] = f[0];
    for(i = 1;i < n;i++)
    {
        if(A[k][2] <= s[i])
        {
            k++;
            A[k][0] = a[i];
            A[k][1] = s[i];
            A[k][2] = f[i];
        }
    }

    printf("\n\nThe activities to be chosen are :\n");
    for(i = 0;i <= k;i++)
    {
        printf("Activity %d : Starting at %d and finishing at %d\n",A[i][0],A[i][1],A[i][2]);
    }




}
