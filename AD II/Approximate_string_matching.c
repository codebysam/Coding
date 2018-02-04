#include<stdio.h>
#include<string.h>
int l1,l2;
int min(int x,int y,int z)
{
    if(x < y)
    {
        if(x < z)
            return x;
        else
            return z;
    }
    else{
        if(y < z)
            return y;
        else
            return z;
    }
}
int min_ind(int x,int y,int z)
{
    if(x < y)
    {
        if(x < z)
            return 0;
        else
            return 2;
    }
    else{
        if(y < z)
            return 1;
        else
            return 2;
    }
}

void reconstruct_path(int M[][l1+1],char T[],char P[],int i,int j)
{
    if(i == 0 && j == 0)
    {
        printf("(0, 0) - Start\n");
    }
    else if(i == 0 && j != 0)
    {
        reconstruct_path(M,T,P,i,j-1);
        printf("(%d, %d) - I\n",i,j);
    }
    else if(i != 0 && j == 0)
    {
        reconstruct_path(M,T,P,i-1,j);
        printf("(%d, %d) - D\n",i,j);
    }
    else
    {
        int k = M[i-1][j-1];
        if(T[j-1] != P[i-1])
            k++;
        int l = min_ind(M[i][j-1]+1,k,M[i-1][j]+1);
        if(l == 0)
        {
            reconstruct_path(M,T,P,i,j-1);
            printf("(%d, %d) - I\n",i,j);
        }
        else if(l == 1)
        {
            reconstruct_path(M,T,P,i-1,j-1);
            if(T[j-1] != P[i-1])
            {
                printf("(%d, %d) - S\n",i,j);
            }
            else
            {
                printf("(%d, %d) - M\n",i,j);
            }
        }
        else
        {
            reconstruct_path(M,T,P,i-1,j);
            printf("(%d, %d) - D\n",i,j);
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

    for(i = 0;i <= l1;i++)
        M[0][i] = i;

    for(i = 0;i <= l2;i++)
        M[i][0] = i;

    for(i = 1;i <= l2;i++)
    {
        for(j = 1;j <= l1;j++)
        {
            int k = M[i-1][j-1];
            if(T[j-1] != P[i-1])
                k++;
            M[i][j] = min(M[i][j-1]+1,k,M[i-1][j]+1);
        }
    }

    printf("The edit distance matrix is :\n");
    for(i = 0;i <= l2;i++)
    {
        for(j = 0;j <= l1;j++)
        {
            printf("%2d ",M[i][j]);
        }
        printf("\n");
    }

    printf("The transformation of pattern to text can be achieved by the following %d steps :\n",M[l2][l1]);
    reconstruct_path(M,T,P,l2,l1);
}
