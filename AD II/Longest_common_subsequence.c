#include<stdio.h>
#include<string.h>
int l1,l2;
int max(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}

void construct_common_sequence(int M[][l1+1],char T[],char P[],int i,int j)
{
    if(i == 0 || j == 0)
        return;
    else
    {
        if(T[j-1] == P[i-1])
        {
            construct_common_sequence(M,T,P,i-1,j-1);
            printf("%c",T[j-1]);
        }
        else if(M[i][j-1] > M[i-1][j])
        {
            construct_common_sequence(M,T,P,i,j-1);
        }
        else
        {
            construct_common_sequence(M,T,P,i-1,j);
        }
    }
}
int main()
{
    char T[100],P[100];

    printf("Enter the text >> ");
    scanf("%[^\n]s",T);

    printf("Enter the pattern >> ");
    scanf("\n%[^\n]s",P);

    l1 = strlen(T);
    l2 = strlen(P);

    int M[l2+1][l1+1],i,j;

    for(i = 0;i <= l2;i++)
    {
        for(j = 0;j <= l1;j++)
        {
           M[i][j] = 0;
        }
    }

    for(i = 1;i <= l2;i++)
    {
        for(j = 1;j <= l1;j++)
        {
            if(T[j-1] == P[i-1])
                M[i][j] =  M[i-1][j-1] + 1;
            else
                M[i][j] = max(M[i][j-1], M[i-1][j]);
        }
    }

    printf("\nThe match matrix is :\n");
    for(i = 0;i <= l2;i++)
    {
        for(j = 0;j <= l1;j++)
        {
            printf("%2d ",M[i][j]);
        }
        printf("\n");
    }

    printf("\nThe LCS is of length %d and the sequence is : ",M[l2][l1]);
    construct_common_sequence(M,T,P,l2,l1);
}
